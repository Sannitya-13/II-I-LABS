#include<iostream> 
using namespace std;
 class A 
{
    public: 
      void display();
};
  
void A::display()
{
   cout << "function called";
}
 int main()
{
   A a;
   a.display();
   return 0;
}

