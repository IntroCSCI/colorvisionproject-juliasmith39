# Color Blindness Safety

## Description

This program takes user input for a color and the name of a file to save their theme to. Then, taking the user information, it then creates a theme that provides the user with 6 distinct colors that are safe for those with color blindness to use.

### v0.2 Updates

This program takes user input for a color and the name of a file to save their theme to. Then, taking the user information, it then creates a theme that provides the user with 6 distinct colors that are safe for those with color blindness to use. This is done by reading through a file of the 140 color names and it then finds the color given by the user. The theme is created by printing out the given color from the user as well as 5 other colors that are in increments of 41.
 

### v1.0 Updates

This updated version builds upon the previous, and now checks to see if their are any problematic colors within the created theme. To check to make sure that the created theme is safe for those with color blindness to use, one of the functions within the newly created class checks to see if there are any problematic pairs. This is done by reading through the colornames.txt file and finding the positions of the colors from the created color theme. If any two colors within the theme are positioned within 3 lines of each other in the colornames.txt file, either above or below the colors, a warning will be displayed to the user. Otherwise, if a pair of problematic colors was not detected, a warning will not be displayed. To test how well this worked, I took 10 random colors from the colornames.txt file, had my program create the theme, and I then took those colors from the themes and ran them through the color blindness simulator. Of the 10 randomly chosen colors and their themes, 7 of them didn't have any problems for those with color blindness. I have also found a handful of colors that will display the problematic color pair warning so far. The colors I've found so far are:

Chocolate,
GreenYellow,
Pink,
 and DarkSeaGreen


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
HERE IS AN EXAMPLE OF THE PROGRAM WITH THE WARNING DISPLAYED:

Input a color value with a given name to be saved with your theme (capitalize the first letter of each word, and don't include spaces): 
Chocolate

Give a name to save the file as: 
color

Chocolate
Pink
MediumSlateBlue
CornflowerBlue
MistyRose
Khaki

Determining if there are any problematic colors in this theme... (a warning will be displayed if problematic colors were found, otherwise, nothing will be displayed)

WARNING: These two colors could be problematic for those with color blindness: 
CornflowerBlue and MediumSlateBlue

HERE IS AN EXAMPLE WHERE THE WARNING IS NOT DISPLAYED:

Input a color value with a given name to be saved with your theme (capitalize the first letter of each word, and don't include spaces): 
Blue

Give a name to save the file as: 
color

Blue
Silver
Thistle
Aqua
Maroon
MediumVioletRed

Determining if there are any problematic colors in this theme... (a warning will be displayed if problematic colors were found, otherwise, nothing will be displayed)
```

## C++ Guide

### Variables and Data Types

In this program, I used different variables and a variety of data types. For example, I used multiple different strings with variables such as colorName and fileName to represent the user input, and line to represent the information held in each line of the colorname.txt file. I also used a bool data type to help determine whether or not the user's color input matched with any of the color names in the colornames.txt file. 

### Console Input and Output

This program uses console input and output to take in the appropriate information from the user, and it also prints out information, such as the complete color theme for the user to look at. For example I used different input statements to take in the user's choices for the initial color as well as the name of the file that they want to save the color to. I also use output statements to prompt the user to give the program the color name and similarly to prompt for the name of the file. I also used an output statement to print out the complete color theme list.

### Decisions

I used decisions throughout my program to make sure that I covered all kinds of different possibilities that could occur throughout the program. For example, I used a couple of different if statements to check to make sure that files were opened properly. I also used if and if else statements to check to make sure that the user input for the color matched with the name of a color in the colornames.txt file, and to also help to create the color theme of no more than 5 additional colors. 

### Iteration

I used iterations a couple of different times in this program. For example, I used 3 different while loops, one to read through all of the lines in the colornames.txt, one to check to make sure that the user's given color input matches with the name of a color in the colornames.txt file, and another while loop to take 5 additional colors from the colornames.txt file in increments of 41 starting at the user's given color. I also used a couple of for loops with indexes, and they all loop through the colornames.txt file to either read through the list of color names or to create a list of color names.

### File Input and Output

I used file input and output in this program to both read from a file as well as to write to a file. I used file input to take the user's given color name value and then read through the colornames.txt file to check to make sure that the user's color existed in the file. I used file output to write to an SVG file where the color theme would be saved to.

### Arrays/Vectors

I used a couple of vectors containing strings throughout the program. I chose to use vectors instead of arrays because as I was testing my program, I would often change the size of the vector to make sure that a certain part of my program worked correctly, and this would be harder to do if I chose to use arrays. One of these vectors within my program is used to read through the list of colors in the colornames.txt file to check to make sure that the user's color input matches with that of an item in the file. I also used another vector that was meant to create and store the list of colors that the color theme would be saved to after taking the initial color and picking the next 5 colors in increments of 41.

### Functions

I used two different functions, one a void function and the other a function that returns a vector of strings. The purpose of the void function is to check to make sure that the user's color input matches with an item in the colornames.txt list. This function used pass by reference parameters because I wanted to make a copy of the variables that I already had and use those same variables in the function. The purpose of the function that returns a vector of strings was to create the list of colors for the color theme. This function used pass by value parameters because I wanted the variables in the function to create the list, and that way, when it was called in the main function under different variables, then the appropriate list of colors for the color theme would be displayed.

### Classes

The class I created was called colorTheme, and I wanted this class to encompass anything that had to do with the created color theme in order to make this new data type more useful in my main program. This class contains the function that creates the color theme in which the colors are chosen in increments of 41. I changed this function from being a pass by value function in p02 to a pass by reference function in this p03 because since I decided to put this function in my colorTheme class, I wanted to make a copy of the variables that I already had and use those same variables in the function. 

The other function that is in the colorTheme class is the function that determines whether or not there are any pairs of potentially problematic colors for those with color blindness. This is done by reading through the colornames.txt file and finding the positions of the colors from the created color theme. If any two colors within the theme are positioned within 3 lines of each other in the colornames.txt file, either above or below the colors, a warning will be displayed to the user. Otherwise, if a pair of problematic colors were not detected, a warning will not be displayed. I wanted this function to be a pass by value function because I wanted these variables to be copied into memory, and that way, when the value was changed it just changes the value of the copy, but the actual value is still the same. 

With multiple functions that were included in this new data type, this helped to make the data type more useful since it held more information than other data types. It also made my main program more efficient because all I had to do was call the function that was held within the class, and so it took up less space than if I were to have written out the functions into my main program, thus making my main program look cleaner.
