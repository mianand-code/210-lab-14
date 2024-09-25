// COMSC-210 | Lab 14 | Mira Anand
// Module 5, Lesson: OOP Introduction/Review, Assignment: Color Class
// Coded using Visual Studio Code for Mac

#include <iostream>
using namespace std;

// creation of Color class
class Color
{
    // private member variables
    private:
        int red;
        int green;
        int blue;
    // public member functions
    // using inline functions for setters and getters, since functions are 1 line
    public:
        // creating all setters together, to keep it organized
        void setRed(int r)      { red = r; }
        void setGreen(int g)    { green = g; }
        void setBlue(int b)     { blue = b; }
        // creating all getters together, to keep it organized
        // adding a trailing const to each, since getters do not change an object's data
        int getRed() const      { return red; }
        int getGreen() const    { return green; }
        int getBlue() const     { return blue; }

        // creating a member print() method to print the object's data
        void print()
        {
            cout << "Color - RGB color values:" << endl;
            cout << "Red value: " << red << ", ";
            cout << "Green value: " << green << ", ";
            cout << "Blue value: " << blue << endl;
            cout << endl;
        }
};

int main()
{
    // creation of 1st color object
    Color color1;
    // using setters to populate the object with data
    // RGB color values are within the range of 0-255, so data has to be within that range
    // 255, 0, 0 are the RGB values that create the color red
    color1.setRed(255);
    color1.setGreen(0);
    color1.setBlue(0);
    // outputting color values to the console using the object's print() method
    color1.print();

    // creation of 2nd color object
    Color color2;
    // using setters to populate the object with data
    // 0, 255, 0 are the RGB values that create the color green
    color2.setRed(0);
    color2.setGreen(255);
    color2.setBlue(0);
    // outputting color values to the console using the object's print() method
    color2.print();

    // creation of 3rd color object
    Color color3;
    // using setters to populate the object with data
    // 0, 0, 255 are the RGB values that create the color blue
    color3.setRed(0);
    color3.setGreen(0);
    color3.setBlue(255);
    // outputting color values to the console using the object's print() method
    color3.print();

    // creation of 4th color object
    Color color4;
    // using setters to populate the object with data
    // 255, 255, 0 are the RGB values that create the color yellow
    color4.setRed(255);
    color4.setGreen(255);
    color4.setBlue(0);
    // outputting color values to the console using the object's print() method
    color4.print();

    // creation of 5th color object
    Color color5;
    // using setters to populate the object with data
    // 255, 192, 203 are the RGB values that create the color pink
    color5.setRed(255);
    color5.setGreen(192);
    color5.setBlue(203);
    // outputting color values to the console using the object's print() method
    color5.print();

    return 0;
}