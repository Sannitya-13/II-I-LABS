/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
class A{
    int x;
    public:
    A(){}
    A(int i){
        x=i;
    }
    void operator+(A);
};
void A :: operator+(A a){
    int m=x+a.x;
    cout<<"The result of the addition of two objects is:"<<m;
    
}

int main()
{
    A a1(5);
    A a2(4);
    a1+a2;

    return 0;
}
