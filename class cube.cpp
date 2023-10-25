#include<iostream>
using namespace std;

class Cube
{
   public:                   
   double width = 1;
   double height = 1; // Changed 'length' to 'height' to match the variable used later
   double length = 1;
};

int main()
{
   double vol; // Changed 'int' to 'double' to accommodate fractional volumes
   Cube cube1;
   vol = cube1.height * cube1.width * cube1.length; // Changed 'height' instead of 'length'

   cout << "The volume of the cube is " << vol << " m^3";
   
   return 0;
}



