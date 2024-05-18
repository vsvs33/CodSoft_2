#include <iostream>
#include <math.h>

using namespace std; 

class Calculator 
{
private:
  int a, b; 

public: 
   void result() 
    { 
        cout<<"Enter First Number: ";
        cin>>a; 
        cout<<"Enter Second Number: "; 
        cin>>b; 
    }
    
    int add() 
    { 
        return a+b; 
    }
    
    int sub() 
    { 
        return a-b; 
    } 

    int mul() 
    { 
        return a*b; 
        
    } 

    int div() 
    { 
        if (b!=0) 
        { 
            return a/b;
        } 
        else 
        { 
            cout<<"ERROR:Division By Zero Is INFINITY\n";
            return 0;
        } 
    }
};
int main() 
{
  int d; 
  Calculator c; 

  cout<<"Enter 0 to Add 2 Numbers";
  cout<<"\nEnter 1 to Subtract 2 Numbers";
  cout<<"\nEnter 2 to Multiply 2 Numbers";
  cout<<"\nEnter 3 to Divide 2 Numbers";
  cout<<"\nEnter 4 To Exit"; 

  do 
  {
    cout<<"\n*************";
    cout<<"\nEnter Choice: "; 
    cin>>d; 
   
    switch (d) 
    { 
      case 0: 
         c.result(); 
         cout<<"Result: "<<c.add()<<endl; 
         break; 

      case 1: 
         c.result(); 
         cout<<"Result: "<<c.sub()<<endl; 
         break; 

      case 2: 
          c.result();
          cout<<"Result: "<<c.mul()<<endl; 
          break; 

      case 3: 
          c.result(); 
          cout<<"Result: "<<c.div()<<endl;
          break; 
     } 
   } while (d>=1 && d<=4); 

 return 0; 