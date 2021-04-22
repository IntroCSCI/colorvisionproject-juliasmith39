# Color Blindness Safety

## Description

This program takes user input for a color and the name of a file to save their theme to. Then, taking the user information, it then creates a theme that provides the user with 6 distinct colors that are safe for those with color blindness to use.

### v0.2 Updates

This program takes user input for a color and the name of a file to save their theme to. Then, taking the user information, it then creates a theme that provides the user with 6 distinct colors that are safe for those with color blindness to use. This is done by reading through a file of the 140 color names and it then finds the color given by the user. The theme is created by printing out the given color from the user as well as 5 other colors that are in increments of 23.
 

### v1.0 Updates

*Coming soon*


## Developer

Julia Smith

## Example

To run the program, give the following commands:

```
g++ --std=c++11 *.cpp -o cvp
./cvp
```

Here is an example of the program running:

```
Input a color value with a given name to be saved with your theme (capitalize the first letter of each word, and don't include spaces): 
Green
Give a name to save the file as: 
colorlist
Green
LightBlue
DarkGoldenrod
MistyRose
DeepPink
Violet
```

## C++ Guide

### Variables and Data Types

In this program, I used different variables and a variety of data types. For example, I used multiple different strings with variables such as colorName and fileName to represent the user input, and line to represent the information held in each line of the colorname.txt file. I also used a bool data type to help determine whether or not the user's color input matched with any of the color names in the colornames.txt file. 

### Console Input and Output

This program uses console input and output to take in the appropriate information from the user, and it also prints out information, such as the complete color theme for the user to look at. For example I used different input statement to take in the user's choices for the initial color as well as the name of the file that they want to save the color to. I also use output statements to prompt the user to give the program the color name and similarly to prompt for the name of the file. I also used an output statement to print out the complete color theme list.

### Decisions

I used decisions throughout my program to make sure that I covered all kinds of different possibilities that could occur throughout the program. For example, I used a couple of different if statements to check to make sure that files were opened properly. I also used if and if else statements to check to make sure that the user input for the color matched with the name of a color in the colornames.txt file, and to also help to create the color theme of no more than 5 additional colors. 

### Iteration

I used iterations a couple of different times in this program. For example, I used 3 different while loops, one to read through all of the lines in the colornames.txt, one to check to make sure that the user's given color input matches with the name of a color in the colornames.txt file, and another while loop to take 5 additional colors from the colornames.txt file in increments of 23 starting at the user's given color. I also used a couple of for loops with indexes, and they all loop through the colornames.txt file to either read through the list of color names or to create a list of color names.

### File Input and Output

I used file input and output in this program to both read from a file as well as to write to a file. I used file input to take the user's given color name value and then read through the colornames.txt file to check to make sure that the user's color existed in the file. I used file output to write to an SVG file where the color theme would be saved to.

### Arrays/Vectors

I used a couple of vectors containing strings throughout the program. One of these vectors is used to read through the list of colors in the colornames.txt file to check to make sure that the user's color input matches with that of an item in the file. I also used another vector that was meant to create and store the list of colors that the color theme would be saved to after taking the initial color and picking the next 5 in increments of 23.

### Functions

I used two different functions, one a void function and the other a function that returns a vector of strings. The purpose of the void function is to check to make sure that the user's color input matches with an item in the colornames.txt list. This function used pass by reference parameters because I wanted to make a copy of the variables that I already had and use those same variables in the function. The purpose of the function that returns a vector of strings was to create the list of colors for the color theme. This function used pass by value parameters because I wanted the variables in the function to create the list, and that way, when it was called in the main function under different variables, then the appropriate list of colors for the color theme would be displayed.

### Classes

*Coming in version 1.0*
