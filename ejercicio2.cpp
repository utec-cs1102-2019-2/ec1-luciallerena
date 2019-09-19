#include <iostream>
using namespace std;



int main() {
   int*ptrmonton=nullptr;
   int*ptrvar=nullptr;

   int var=20;
   ptrvar=&var;

   ptrmonton=new int;
   *ptrmonton=10;

   delete ptrmonton;
    return 0;
}