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
        void setRed(int r)  { red = r; }
        void setGreen(int g) { green = g; }
};

int main()
{

}