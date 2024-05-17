#include <iostream>
using namespace std;
class A{
    public:
     int x;
     A(int x){
        this->x=x;
     }
     void show(){
        cout<<"A's x="<<x<<endl;
     }
};
class B{
    public:
     int x;
     B(int x){
        this->x=x;
     }
     void show(){
        cout<<"B's x="<<x<<endl;
     }
};

class C:public A,public B{
    public :
     int x;
    C(int x,int y):A(x),B(y){
        // A::show();
        // B::show();
    }

};

int main(){
    C x(2,1);
    x.B::show();
    x.A::show();
} 