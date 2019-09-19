#include <iostream>
using namespace std;

int varglobal=20;

int main() {
    int var_local=10;
    int *ptr_var_local=&var_local;

    cout<<var_local<<"\n";
    return 0;
}