#include <iostream>
using namespace std;
class A{
   protected:
    int x;
     public:

     A(){
        cout<<"A"<<endl;
     }
     void read(){
      cout<<"Enter the value of x"<<endl;
      cin>>x;
     }
     void show(){
      cout<<"The vlaue of x"<<endl;
     }
};


class B:virtual public A{
  public:
  B(){
    cout<<"B"<<endl; 
  }
};

class C:virtual public A{
   public:
   C(){
    cout<<"C"<<endl;
   }
};
class D:public B,public C{
   public:
   D(){
    cout<<"D"<<endl;
   }
};
int main(){
  // D d;
  // d.read();
  // d.show();
  cout<<"hi"<<endl;
  int c;
  cin>>c;
  int d;
  cin>>d;
  cout<<c<<endl<<d<<endl;
}