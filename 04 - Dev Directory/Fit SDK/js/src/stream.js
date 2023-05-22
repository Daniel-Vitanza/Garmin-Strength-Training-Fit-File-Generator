/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2023 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 21.105Release
// Tag = production/release/21.105.00-0-gdc65d24
/////////////////////////////////////////////////////////////////////////////////////////////


import FIT from "./fit.js";
import UtilsInternal from "./utils-internal.js";

class Stream {
    static LITTLE_ENDIAN = true;
    static BIG_ENDIAN = false;

    #position = 0;
    #arrayBuffer = null;
    #textDecoder = new TextDecoder("utf-8", { fatal: false, ignoreBOM: true });
    #crcCalculator = null;

    /**
     * Convenience method for creating a Stream from a byte array
     * @param {Array<number>} data An array of bytes
     * @returns {Stream} A new Stream object
     * @static
     */
    static fromByteArray(data) {
        const buf = new Uint8Array(data);
        return this.fromArrayBuffer(buf.buffer);
    }

    /**
     * Convenience method for creating a Stream from a Node Buffer
     * @param {Buffer} buffer - Node Buffer of bytes
     * @returns {Stream} A new Stream object
     * @static
     */
    static fromBuffer(buffer) {
        const arrayBuffer = buffer.buffer.slice(buffer.byteOffset, buffer.byteOffset + buffer.byteLength);
        return this.fromArrayBuffer(arrayBuffer);
    }

    /**
     * Convenience method for creating a Stream from an ArrayBuffer
     * @param {ArrayBuffer} arrayBuffer - An ArrayBuffer of bytes
     * @returns {Stream} A new Stream object
     * @static
     */
    static fromArrayBuffer(arrayBuffer) {
        const stream = new Stream(arrayBuffer);
        return stream;
    }

    /**
     * Creates a Stream containing a FIT file
     * @constructor
     * @param {ArrayBuffer} stream - ArrayBuffer containing a FIT file
     */
    constructor(arrayBuffer) {
        this.#position = 0;
        this.#arrayBuffer = arrayBuffer;
    }

    get length() {
        return this.#arrayBuffer.byteLength;
    }

    get bytesRead() {
        return this.#position;
    }

    get position() {
        return this.#position;
    }

    get crcCalculator() {
        return this.#crcCalculator;
    }

    set crcCalculator(crcCalculator) {
        this.#crcCalculator = crcCalculator;
    }

    reset() {
        this.seek(0);
    }

    seek(position) {
        this.#position = position;
    }

    slice(begin, end) {
        return this.#arrayBuffer.slice(begin, end);
    }

    peekByte() {
        const arrayBuffer = this.#arrayBuffer.slice(this.#position, this.#position + 1);
        const dataView = new DataView(arrayBuffer);
        return dataView.getUint8(0);
    }

    readByte() {
        return this.readUInt8();
    }

    readBytes(size) {
        if (this.#position + size > this.#arrayBuffer.byteLength) {
            throw Error(`FIT Runtime Error end of stream at byte ${this.#position}`);
        }

        const bytes = this.#arrayBuffer.slice(this.#position, this.#position + size);
        this.#position += size;

        this.#crcCalculator?.addBytes(new Uint8Array(bytes), 0, size);

        return bytes;
    }

    readUInt8() {
        return this.readValue(FIT.BaseType.UINT8, 1);
    }

    readInt8() {
        return this.readValue(FIT.BaseType.SINT8, 1);
    }

    readUInt16(opts) {
        return this.readValue(FIT.BaseType.UINT16, 2, { convertInvalidToNull: false, ...opts });
    }

    readInt16(opts) {
        return this.readValue(FIT.BaseType.SINT16, 2, { convertInvalidToNull: false, ...opts });
    }

    readUInt32(opts) {
        return this.readValue(FIT.BaseType.UINT32, 4, { convertInvalidToNull: false, ...opts });
    }

    readInt32(opts) {
        return this.readValue(FIT.BaseType.SINT32, 4, { convertInvalidToNull: false, ...opts });
    }

    readUInt64(opts) {
        return this.readValue(FIT.BaseType.UINT64, 8, { convertInvalidToNull: false, ...opts });
    }

    readInt64(opts) {
        return this.readValue(FIT.BaseType.SINT64, 8, { convertInvalidToNull: false, ...opts });
    }

    readFloat32(opts) {
        return this.readValue(FIT.BaseType.FLOAT32, 4, { convertInvalidToNull: false, ...opts });
    }

    readFloat64(opts) {
        return this.readValue(FIT.BaseType.FLOAT64, 8, { convertInvalidToNull: false, ...opts });
    }

    readString(strlen) {
        return this.readValue(FIT.BaseType.STRING, strlen);
    }

    readValue(baseType, size, { endianness = Stream.LITTLE_ENDIAN, convertInvalidToNull = true } = {}) {
        const baseTypeSize = FIT.BaseTypeDefinitions[baseType].size;
        const baseTypeInvalid = FIT.BaseTypeDefinitions[baseType].invalid;

        const arrayBuffer = this.readBytes(size);

        if (size % baseTypeSize !== 0) {
            return convertInvalidToNull ? null : baseTypeInvalid;
        }

        if (baseType === FIT.BaseType.STRING) {
            const string = this.#textDecoder.decode(arrayBuffer).replace(/\uFFFD/g, "");
            const strings = string.split('\0');

            while (strings[strings.length - 1] === "") {
                strings.pop();
            }

            if (strings.length === 0) {
                return null;
            }

            return strings.length === 1 ? strings[0] : strings;
        }

        const dataView = new DataView(arrayBuffer);
        let values = [];

        const count = size / baseTypeSize;

        for (let i = 0; i < count; i++) {

            switch (baseType) {
                case FIT.BaseType.BYTE:
                case FIT.BaseType.ENUM:
                case FIT.BaseType.UINT8:
                case FIT.BaseType.UINT8Z:
                    values.push(dataView.getUint8(i * baseTypeSize));
                    break;

                case FIT.BaseType.SINT8:
                    values.push(dataView.getInt8(i * baseTypeSize));
                    break;

                case FIT.BaseType.UINT16:
                case FIT.BaseType.UINT16Z:
                    values.push(dataView.getUint16(i * baseTypeSize, endianness));
                    break;

                case FIT.BaseType.SINT16:
                    values.push(dataView.getInt16(i * baseTypeSize, endianness));
                    break;

                case FIT.BaseType.UINT32:
                case FIT.BaseType.UINT32Z:
                    values.push(dataView.getUint32(i * baseTypeSize, endianness));
                    break;

                case FIT.BaseType.SINT32:
                    values.push(dataView.getInt32(i * baseTypeSize, endianness));
                    break;

                case FIT.BaseType.UINT64:
                case FIT.BaseType.UINT64Z:
                    values.push(dataView.getBigUint64(i * baseTypeSize, endianness));
                    break;
                case FIT.BaseType.SINT64:
                    values.push(dataView.getBigInt64(i * baseTypeSize, endianness));
                    break;

                case FIT.BaseType.FLOAT32:
                    values.push(dataView.getFloat32(i * baseTypeSize, endianness));
                    break;

                case FIT.BaseType.FLOAT64:
                    values.push(dataView.getFloat64(i * baseTypeSize, endianness));
                    break;
            }
        }

        if (convertInvalidToNull) {
            values = values.map(value => value === baseTypeInvalid ? null : value);
        }

        return UtilsInternal.sanitizeValues(values);
    }
}

export default Stream;