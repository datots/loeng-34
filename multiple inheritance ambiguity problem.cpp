/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;
 
class main_first{
    public:
    void hello(){
        cout <<"How is you doing"<<endl;
    }
};

class main_second{
    public:
    int x = 9;
    void hello(){
        cout<<"Thank you fine, and you?"<<endl;
    }
};

class child: public main_first,public main_second{
    public:
    int y = 7;
    void hello(){
        cout<<"Also fine thank you!!"<<endl;
    }
};
int main()
{
    int result;
    child obj;
    result =  obj.x * obj.y;
    
    obj.main_second::hello();

    cout<<result;
    return 0;
}