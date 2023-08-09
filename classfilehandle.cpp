#include<bits/stdc++.h>
#include<string.h>
#include<fstream>
using namespace std;


class corona
{  private:
   int bookid;
   char title[20];
   float price;

    public:
void bookgetdata()
     {   cout << "Enter bookid, title, "
             << " price: "; 
        cin >> bookid; 
        cin.ignore(); 
        cin.getline(title, 19); 
        cin >> price; 
     }

void bookstoredata()
     {
        ofstream fout;
        fout.open("cpp.txt", ios:: app);
        fout.write((char*)this, sizeof(*this));
        fout<<"\n";
        fout.close();
     }

void showdata()
  {
     cout << "\n"
             << bookid 
             << " " << title << " " << price; 
  }

void showalldata()
  {
      ifstream fin;
      fin.open("cpp.txt", ios::in ;
    if (!fin) 
        cout << "File not found"; 
  
    else { 
        fin.read((char*)this, sizeof(*this)); 

        while (!fin.eof())
        { 
            showdata(); 
            fin.read((char*)this, sizeof(*this)); 
        } 
        fin.close(); 
  }}

  
};
int main()
{    corona a,b;
   for(int i=0; i<2; i++)
   {
     a.bookgetdata();
     a.bookstoredata();
    }
  b.showalldata();
    
    
      
    return 0;
}
