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


const crcTable = [
    0x0000, 0xCC01, 0xD801, 0x1400, 0xF001, 0x3C00, 0x2800, 0xE401,
    0xA001, 0x6C00, 0x7800, 0xB401, 0x5000, 0x9C01, 0x8801, 0x4400
]

class CrcCalculator {
    #crc = 0;

    constructor() {
    }

    get crc() {
        return this.#crc;
    }

    #updateCRC(value) {
        // compute checksum of lower four bits of byte
        let tmp = crcTable[this.#crc & 0xF];
        this.#crc = (this.#crc >> 4) & 0x0FFF;
        this.#crc = this.#crc ^ tmp ^ crcTable[value & 0xF];

        // compute checksum of upper four bits of byte
        tmp = crcTable[this.#crc & 0xF];
        this.#crc = (this.#crc >> 4) & 0x0FFF;
        this.#crc = this.#crc ^ tmp ^ crcTable[(value >> 4) & 0xF];

        return this.#crc;
    }

    addBytes(buf, start, end) {
        for (let i = start; i < end; i++) {
            this.#crc = this.#updateCRC(buf[i]);
        }

        return this.#crc;
    }

    static calculateCRC(buf, start, end) {
        const crcCalculator = new CrcCalculator();
        return crcCalculator.addBytes(buf, start, end);
    }
}

export default CrcCalculator;