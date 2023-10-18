#include<iostream>
using namespace std;
using namespace std;


class cube
{
   private:                    
   double height;
   double width;
   double length;

   public:
   ~cube(){
    cout<<"Destuctor executed"<<endl;
   }
    double volume(){
    double vol = height*width*length;
    cout<<"Volume is"<<vol<<endl;
    return vol;
    }
};
main() {
  cube cube1;
  cube1.volume();
  double volume = height*length*width;

   return 0;
}
    


