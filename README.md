# Garmin-Strength-Training-Generator


## Abstract
In this git, you will find a Garmin strength training fit file generator to create your custom workout within an Excel file and by-pass the limit of 50 steps from the Garmin Connect App/Web.


## Introduction
If you use your preferred Garmin Watch to seriously record your strength training (bodybuilding) activities based on prepared workouts, you already know that you can't create workouts with more than 50 steps in the Garmin Connect App/Web.

Like this, if you create a workout with 4 different benchpress series and 4 breaks of 1 minutes, it will already need 8 steps in Garmin Connect or to use loops and reduce the variation from series to series. This is of course quite limiting the added-value of our watch if you follow a progressive training calendar to gain muscles in a proper way. (Trust me, I was so pissed off by discovering this limit).

However, after some tinkering with the Garmin Fit File SDK (https://developer.garmin.com/fit/overview/), I found out that the limit can be by-pass by creating a workout fit file without the Garmin Connect App/Web for my Venu 2 Plus. Therefore, I developed this little project to get things done in an easy way for my own training. Then, why not for you too ? ;)


## Files Structure
You basically need 2 files and 2 folders in the root:    
| Files/Folders | Description |
| :------------------ | :----------------------------------------------------------------------------------------------- |
| WorkoutCreator.xslm | which is the Excel file to create your workout and launch the VBA macros to create the fit file. | 
| FitGenerator.jar    | which is the java archive create from a slightly modified Garmin SDK. |
| folder csv-files    | where csv files containing the workout will be created (not to use with the watch, they are only backup files for the FitGenerator.jar). |
| folder fit-files    | where you will find your fit file freshly generated. |


## How to install ?
The easiest way it to get the zip file "GSTFFG_ReadyInstallArchive.zip" from folder "02 - ReadyInstallArchive" and just extract it somewhere on your computer.  


## How to use ?
1) Open the Excel file "WorkoutCreator.xlsm.  
2) In the tab "Data input":  
First write a Workout Name.   
Then modify the main table to create your custom workout by following the provided examples.   
Use the list to select the exercises and entries required. Obviously, you can add and delete lines as you want.   
If you want to add some notes for each exercises as in Garmin Connect, just put them in the "Notes" column, even with line breaks if needed. (that's why we use a "slightly" modified Garmin SDK)
3)Once finished, just click on the button "Generate Fit File"  
![image](https://github.com/Daniel-Vitanza/Garmin-Strength-Training-Fit-File-Generator/assets/131000256/a0d86682-f4e1-4e5b-86db-9caa9b88b542)
4)Your workout fit file can be found in the folder "fit-files". Just copy it to your watch via the usb connection in the folder "Garmin\Workout". Enjoy !  

NB: If you have a different workouts, you can save them in different Excel files. For instance, I did that for two workouts A and B in the folder "03 - Examples".  

## Added-Value and Limitations
### Added-Value
-No more 50 steps limit for strength training workouts.  
-Easy Excel UI  
-Few files required.  
-Series by series, step by step instruction on your watch. No more tricky loops ^^  
-Able to add line breaks in exercise notes thanks to the slightly modified SDK.  
-Body Muscles Intensity Scheme still available on the watch. (the scheme with grey/yellow/red muscles)  
### Limitations
-No exercise animations because of custom workouts. It was already the case with Garmin Connect but you could edit a pre-made Garmin workout as a workaround. The workaround is obviously dead with my solution.  
-You need to copy the fit file manually on your watch. I did not find any way enabled by Garmin to sync the files either wirelessly, via the app or via a simple copy/paste from a shell/VBA command.  
-Generated workouts can't be linked to Garmin calendar.  

## Revisions
22/05/2023 Initial Release  
