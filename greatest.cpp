#include <iostream>
using namespace std;
int main()
{
float a,b,c;

cout <<" Enter the no.1st"<<endl;
cin>>a;

cout <<" Enter the no.2nd"<<endl;
cin>>b;

cout<< "enter 3rd no."<<endl;
cin>>c;

if((
    a>=b) && (a>=c
))
    cout <<" 1st is greater no. is"<< a <<endl;
   
   else if ((b>=a) &&( b>=c))
    cout << "2nd is greater no."<< b << endl;
   else
   cout<<"  3rd is greater no. " << c << endl;
return 0;





}