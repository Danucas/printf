_printf("format", ... (args))

# This document describes the main purpose of the program.

the _printf function allows to print diferent formats, it uses a string format to make sure what data type has to pull from the arguments list, each format has to be preceded by the character '%' and the identificator for the data type, first a verification for the arguments is done and proceed to check the format string, and makes a call to 'handler' this returns a pointer to the function that has the proper implementation for the flag, check if the function is NULL and the run the function, this function returns the count of characters that has been printed, if the function is null will skip the flag, if the 'format' is NULL or it doesn't have any other character than the flag i will return -1.

The formats handled:

    %c  :  this flag prints the ascii representation of an int value, this flag is handled by the print_char function

    %s  :  the s flag obtain a char pointer from the arguments and print character by character, if the pointer is NULL it will prints (null),  this flag is handled by the print_string function.

    %d, %i  : the implementation for both flags is the same,  this flag is handled by the print_dec function.

More further information will be aded as soon as the project keeps growing.

Authors: Kevin Castro & Daniel Rodriguez
