#include<iostream>
using namespace std;

class A{
    public:
     A(){
        cout<<"A's constructor called"<<endl;
     }
     ~A(){
        cout<<"A"<<endl;
     }
};

class B:public A{
    public:
      B(){
        cout<<"B's constructor called"<<endl;
      }
      ~B(){
        cout<<"B"<<endl;
     }
};

class C:public B{
     public :
    C(){
        cout<<"C's constructor called"<<endl;
    }
    ~C(){
        cout<<"C"<<endl;
     }
};

int main(){
    C c;
}