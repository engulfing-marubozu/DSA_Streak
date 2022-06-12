#include<bits/stdc++.h>
#include<iostream>
#include <algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<map>
#define ll long long int
using namespace std;
void perfect_place(int heap[], int i, int size, int last_update)
{   
    while(i<=last_update)
    {  
        if(2*i + 2 <= size-1)
        {  
            if(heap[i]> min(heap[2*i+1], heap[2*i+2]))
            {
                 if(heap[2*i+1]> heap[2*i+2])
                   {swap(heap[i],heap[2*i+2]);
                     i=2*i+2;}
                else{
                  swap(heap[i],heap[2*i+1]);
                     i=2*i+1;  
                }
            }
            else
              break;
        }
        else if(2*i +1 == size-1)
        {
            if(heap[2*i+1]< heap[i])
                {swap(heap[i], heap[2*i+1]);
                 i=i*2 +1;
                }
                else break;
        }
        else
         break;
    }
}
void build_heap(int heap[], int size, int last_update)
{  
    for(int i=last_update; i>=0; i--)
        perfect_place(heap, i, size, last_update);
  
}
void heap_sort(int heap[],int size, int last_update)
{   int x=size;
    while(size!=1)
    {    int j=1;
        
         swap(heap[0], heap[size-1]);
         size--;
         while(j<=size)
         j=j*2;
         last_update= j/2 -1;
      
         perfect_place(heap ,0, size, last_update);
     
   }
  cout<<endl;
      reverse(heap, heap+x);
      
}
int main()
{  int size;
  cout<<"enter the size of unsorted array\n";
  cin>>size;
 int heap[size];
 for(int i=0; i<size; i++)
  cin>>heap[i];
   
 int i=1, last_update;
 while(i<=size)
  i=i*2;
last_update= i/2 -1;
build_heap(heap, size, last_update);
heap_sort(heap, size,last_update);
  for(int i=0; i<size; i++)
      cout<<heap[i]<<endl;

}



//932 66 777 426 127 404 63 281 426 317 735 628 543 78 31 811 626 104 389 412 687 296 35 252 441 675 604 770 342 284 917 274 702 46 53 829 450 116 463 229 786 198 857 329 276 888 140 254 992 530 18 31 178 405 284 619 80 240 742 423 876 659 49 931 57 102 760 859 571 575 88 357 773 945 38 401 186 531 655 530 413 673 562 591 79 198 563 159 790 305 582 666 316 984 597 373 86 710 584 9 285 673 718 411 970 757 812 508 288 468 39 701 493 953 644 924 151 559 84 293 864 18 959 532 2 909 257 441 619 842.................