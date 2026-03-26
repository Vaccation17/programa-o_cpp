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
    
    int nota1,nota2,nota3,nota4,falta;
    cout<< "Digite sua nota1:";
    cin >> nota1;
    cout<< "Digite sua nota2:";
    cin >> nota2;
    cout<< "Digite sua nota3:";
    cin >> nota3;
    cout<<"Digite sua quantidade de faltas: ";
    cin>> falta;
    nota4=(nota1+nota2+nota3)/3;
    if (nota4>=60){
        if (falta<=300){
            cout<<"Vocẽ foi aprovado";
        }else{
            cout<< "Foi reprovado por falta";
        }
    }else{
        cout<<"Foi reprovado por nota";
    }

    return 0;
}