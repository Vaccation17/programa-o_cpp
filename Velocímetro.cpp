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
    int velocidade;
    
    cout<<"Determine a velocidade do carro:   ";
    cin>> velocidade;
    
    if (velocidade > 80){
        int multa = (velocidade - 80)*5;
        cout<<"\nVocê foi multado por R$"<< multa << endl;
    }else{
        cout<<"\nVocê está dentro do limite";
    }
   
    return 0;
}