#include<iostream>
#include<string>
using namespace std;
class employee{
    string name;
    int id;
    float bs;
    float da;
    float IT;
    public:
       void read(){
       cout<<"enter name:";
       cin>>name;
       cout<<"enter id:";
       cin>>id;
       cout<<"enter bs:";
       cin>>bs;
       cout<<"enter da:";
       cin>>da;
       cout<<"enterIT:";
       cin>>IT;
       }
       void gross()
       {
        float gs;
        gs = bs + da - IT;
        cout << "gross salary is:" << gs << endl;
        }
       void display(){
               cout<<"name of the employee:"<<name<<endl;
               cout<<"id of the employee:"<<id<<endl;
               cout<<"bs of the employee:"<<bs<<endl;
               cout<<"da of the employee:"<<da<<endl;
               cout<<"it of the employee:"<<IT<<endl;
               }
 };
       int main(){
           employee E1;
           E1.read();
           E1.display();
           E1.gross();
    return 0;                                                                                                                
}





