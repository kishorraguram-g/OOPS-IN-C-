#include<iostream>
using namespace std;
class Number{
    private :
     int x;
    public:
      Number(int x)
      {
        this->x=x;
      }
      Number operator ++(int){
               return Number (x++);
       }
     Number operator --(int){
            return Number(x--);
        }
        void display(){
            cout<<"x="<<x<<endl;
        }
};

int main(){
    Number n1(20);
    Number n2=n1++;
    n1.display();
    n2.display();
    Number n3=n2--;
    n3.display();
    n2.display();
    return 0;

}