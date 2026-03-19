/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"\nDigite o número: ";
    cin>>a;
    if (a%2==0){
        cout<<"\nO número é par";
    }else{
        cout<<"\nO número é ímpar";
    }

    return 0;
}