#include <iostream>
using namespace std;
int main(){
  float n1;
  float n2;
  char a;
  
  cout<<"                  Simple Calculator"<<endl<<endl;
  
  cout << "  Enter first number: ";
  cin >> n1;
  cout<<endl;
  
  cout << "  Enter second number: ";
  cin >> n2;
  cout<<endl;
  
  cout<<"  Enter Operator: ";
  cin>>a;
  cout<<endl;
  
  switch(a){
    case '+' : cout<<"  Addition is: "<<n1+n2<<endl<<endl;
    break;

    case '-' : cout<<"  Subtraction is: "<<n1-n2<<endl<<endl;
    break;
    case '/' : cout<<"  Divison is: "<<n1/n2<<endl<<endl;
    break;
    case '*' : cout<<"  Multiplication is: "        
                <<n1*n2<<endl<<endl;
    break;
    default: cout<<"  Invalid Operator"<<endl<<endl;
  }

  
  cout<<"             Thanks For Using Our Calculator"<<endl;
  return 0;
}
