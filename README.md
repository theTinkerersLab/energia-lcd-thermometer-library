# Energia LCD Thermometer Library
A library for creating a graphical thermometer on 16 X 2 LCD in [Energia]. It is an extension of *LiquidCrystal – Generic LCD library* in [Energia Libraries][el]

# Features
+ Compatible with MSP430 Launchpad & Stellaris Launchpad
+ Multiple thermometer styles which suit a variety of uses

### Thermometer styles on LCD
![styles thermometer](/img/styles.jpg?raw=true "Thermometer styles")

# Installation
Custom library creation is supported in Energia. Please refer this [tutorial][libtut] for further details.

## Steps to add LCD thermometer to Energia
+ Copy the libraries folder into 
```
C:\Users\Username\My Documents\Energia\librariesfolder
```
+ Restart Energia

### Energia after installation
![Alt text](/img/git_lcd_thermometer.jpg?raw=true "After installation")

# Usage
+ Create a new sketch and copy *WarningThemometer.ino* into it.
+ Change target board to stellaris in Energia
```
Tools -> Board -> LaunchPad(Stellaris) w/ lm4f120 (80MHz)
```
+ Verify, Upload & Enjoy :)

# Contributing
1. Fork it!
2. Create your feature branch: `git checkout -b my-new-feature`
3. Commit your changes: `git commit -am 'Add some feature'`
4. Push to the branch: `git push origin my-new-feature`
5. Submit a pull request :D

# Credits
+ *LiquidCrystal – Generic LCD library* - Energia library

# License
This project is licensed under the GPL License - see the [LICENSE](LICENSE) file for details

[libtut]:<http://energia.nu/Tutorial_Library.html>
[el]:<http://energia.nu/reference/libraries/>
[energia]: <http://energia.nu/>
