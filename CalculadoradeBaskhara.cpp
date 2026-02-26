/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath> //Biblioteca de comandos matemáticos.
using namespace std;


int main()
{
    
    cout<<"Calculadora de Baskhara";
    cout<<"\n --------------------";
    
    float a;
    float b;
    float c;
    float delta;
    double raiz_delta;
    double solucao1;
    double solucao2;

    //Entrada de dados.
    
    cout<<"\nDigite o valor de a: ";
    cin>> a;
    cout<<"\nDigite o valor de b: ";
    cin>> b;
    cout<<"\nDigite o valor de c: ";
    cin>> c;
    
    // Calculo de Delta.
    
    delta = b*b-4*a*c;
    
    cout<< "\nDelta = "<< delta;
    
    raiz_delta = sqrt(delta);
    
    cout<< "\nraiz_delta = "<< raiz_delta; 
    
    solucao1 = (-b-raiz_delta)/(2*a);
    solucao2 = (-b+raiz_delta)/(2*a);
    
    cout<<"\n x1 = "<< solucao1;
    cout<<"\n x2 = "<< solucao2;








}
