#include <iostream>
using namespace std;
int i = 0;
char s[10];

void S();
void A();
void B();
void disp();
void error();
int main()
{
    
    cout << "Given grammar is " << endl;
    cout << "S -> aBb/ccA" << endl;
    cout << "A -> b/c" << endl;
    cout << "B -> a/b" << endl;
    cout << "Enter the string" << endl;
    cin >> s;
    
    S();
  
}
void S()
{
    if (s[i] == 'a')
    {
        i++;
        B();
        if (s[i] == 'b'){
            i++;
            disp();}
        else
            error();
    }
    else if (s[i] == 'c')
    {
        i++;
        if (s[i] == 'c')
        {
            i++;
            A();
            disp();
        }
        else
            error();
    }
}
void A() 
{
    if (s[i] == 'b' || s[i] == 'c')
        i++;
    else
        error();
}
void B() 
{
    if (s[i] == 'a' || s[i] == 'b')
        i++;
    else
        error();
}
void disp()
{
    cout<<("\nstring is valid\n");
    
}
void error()
{
    cout << "string is invalid \n";
   
}
