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
   double n1, n2, n3 , ma;
    
    cout<<"Insira a nota do 1° Trimestre: ";
    cin>>n1;
    cout<<"Insira a nota do 2° Trimestre: ";
    cin>>n2;
    cout<<"Insira a nota do 3° Trimestre: ";
    cin>>n3;
    
    if (n1 >= 0 && n1 <=100 && n2>=0 && n2<=100 && n3 >=0 && n3<=100){
    ma = (n1+n2+n3)/3;
    cout<<"Média="<<ma;
    
    if (ma >=70){
        cout<<"\n O aluno foi aprovado";  
       }else{
        cout<<"\n O aluno foi reprovado";
       }    
    }else{
        cout<<"Verifique os valores";
    }
    cout<<"\n Obrigado por usar o sisterma!";
    

    return 0;
}