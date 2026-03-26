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
    
    int lado1, lado2, lado3;
    cout<<"Qual o valor do lado1:";
    cin>>lado1;
    cout<<"Qual o valor do lado2:";
    cin>>lado2;
    cout<<"Qual o valor do lado3:";
    cin>>lado3;
    
    if (lado1+lado2>=lado3 && lado1+lado3>=lado2 && lado2+lado3>=lado1){
        cout<<"Os lados formam um triângulo";
        if (lado1==lado2 && lado2==lado3){
        cout<<"\nO triângulo é Equilátero";
    }else{
        if(lado1==lado2 || lado1==lado3 || lado2==lado3){
        cout<<"\nO triângulo é Isóceles";
    }else{
        cout<<"\nO triângulo é escalêno";
       }
    }
    }else{
        cout<<"Os lados não formam um triângulo";
    }
        
    return 0;
} 