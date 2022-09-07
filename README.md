# DigiKeyboardUK
A modified version of the DigiKeyboard library configured to work with UK layout keyboards.

The only difference is the mappings in the scancode-ascii-table.h file.

## How to use
Simply add a folder to your Arduino's libraries called DigiSparkKeyboardUK (though I believe anything will do) and deploy the files in it.
For most users, this ISN'T in the software installation folder but rather a folder in their user profile such as:

C:\Users\YOURUSERNAME\AppData\Local\Arduino15\packages\digistump\hardware\avr\1.6.7\libraries\DigisparkKeyboardUK

Include the library in your project using #include "DigiKeyboardUK.h" and then follow any of the tutorials for the standard DigiSpark.h library.

An other option for those ONLY compiling for UK keyboards is just to overwrite the scancode-ascii-table.h file in their existing package (though obviously if an update is pushed out for the library it could well get overwritten.

## TODO
Have the library added to the online respositories so it can be installed via the GUI in the ARDUINO IDE.
Make some pretty pictures showing the key differences. :-)
