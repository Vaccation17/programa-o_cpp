/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>;
using namespace std;
int main()
{
    double salario, gastos;
    cout<<"Insira o valor do salário em reias:  ";
    cin>> salario;
    cout<<"Insira o valor de gastos em reais:  ";
    cin>> gastos;
    
    if(gastos>salario){
        cout<<"\n Valor estourado";
    }else{
        cout<<"\nValor dentro do orçamento";
    }

    return 0;
}