#include<iostream>
using namespace  std;
class Base{
  int x;
  int y;
  int z;
  public:
    Base(int x,int y,int z){
        this->x=x;
        this->y=y;
        this->z=z;
    }   
};

class Derived: public Base{
   private:
     int a;
    public:
       Derived(int x,int y, int z,int a):Base(x,y,z){
        this->a=a;
       }
       void print(){
        cout<<"HEllo"<<endl;
       }
};

int main(){
     Derived d(1,2,3,4);
     d.print();
     return 0;
}



