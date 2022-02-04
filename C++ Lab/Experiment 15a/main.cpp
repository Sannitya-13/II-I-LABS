/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class Test{
    private:
    int num;
    public:
    Test():num(8){}
    void operator ++(){
        num=num+2;
    }

    void Print(){
    cout<<"The count is:"<<num;
}
};

int main()
{
    Test tt;
    ++tt;
    tt.Print();
    return 0;
}
