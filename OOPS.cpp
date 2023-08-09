#include <bits/stdc++.h>
//#include "oops_class.cpp"
using namespace std;
#include <bits/stdc++.h>
using namespace std;
// class Hero
// {

// public:
//     char *grade;
//     int level;
//     // Hero()
//     // {
//     // }
//     //  Hero(Hero &temp)
//     // {
//     //     cout<<"hello form constructor\n";
//     //     cout<<temp.level<<endl;
//     //     cout<<this-> level;
//     // }
// };

class parent1{
  public :
   int p;
   void f()
   {
    cout<<"parent 1 called";
   }
   protected:
    int pro;
    private:
    int pri;


};
class parent2{
  public :
   int p;
    void f()
   {
    cout<<"parent 2 called\n";
   }
    void x()
    {
      cout<<"into parent2\n";
    }
   protected:
    int pro;
    private:
    int pri;


};


class child : public parent1, public parent2{
  public :
   int p;
    void f()
   {
    cout<<"child called";
   }
    void x()
    {
      cout<<"into self\n";
    }
  
//    protected:
//     int pro;
//     private:
//     int pri;
};


int main()
{


parent1 x;
parent2 y;
child ritik;
ritik.parent2::x();
//ritik.parent1::f();   // if two parent class have the same function name
//ritik.f();
// cout<<rahul.pro;
// cout<<rahul.pri;
//ritik.f();

//cout<<ritik.pro;
























//    cout<<sizeof(Hero)<<endl;
//     Hero rahul; // memory allocated in stack
//     char name[10] = "rahul_raj";
//     rahul.grade = name;
//     Hero *ritik = new Hero(rahul); // memeory allocated in heap
//     cout << sizeof(rahul);         // structure padding (the size is 8 and not 5)
//     cout << sizeof(*ritik);
//     // allocating value through pointer
//     cout << ritik->level; // accesing value through pointer
//     Hero x = rahul;       // default copy constrctorm makes a shallow copy        i.e. stores the address of the char array
//     rahul.grade[0] = 'k'; // changes the name of x also as it is a shallow copy, to make it a deep copy you have to initialise the copy constructor from ourselves in the class
//     cout << x.grade;

    return 0;
}