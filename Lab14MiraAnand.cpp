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
        }
};

int main()
{
    // creation of 1st color object
    Color color1;
    // using setters to populate the object with data
    color1.setRed(255);

    return 0;
}