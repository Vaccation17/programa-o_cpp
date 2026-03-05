/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  //Exercício:
  //Construa um algoritmo que calcule a quantidade de latas de tinta necessária e o custo para pintar
  //tanques cilíndricos de combustível, em que são fornecidos a altura e o raio desse cilíndro.
  
  //.A Lata Custa R$50,00.
  //.Cada lata contém 5 litros.
  //.Cada litro de tinta pinta 3 m².
  
  //DADOS:
  //Fórmula da área do círculo: 2*Π*r².
  //Fórmula lateral do cilindro: 2*Π*r*h.
  //Fórmula = 2*Π*r² + 2*Π*r*h.
  
  double pi;
  double r;
  double h;
  double lata;
  
  
  
  cout<<"\nInsira o valor de Pi:";
  cin>>pi;
  cout<<"\nInsira o valor do Raio:";
  cin>>r;
  cout<<"\nInsira o valor da Altura:";
  cin>>h;
  
  double area = 2*pi*r*r+2*pi*r*h;
  
  area = area;
  cout<<"\nA área tem: "<<area<<" m².";
  
  lata=area/15;
  lata = ceil(lata);
  cout<<"\nSerá necessário "<<lata<<" latas de tinta.";
  
  double preco = lata*50;
  
  cout<<"\nSerá gasto com latas de tinta "<<preco<<" reais.";
 
  
  
  
  
  
  
  
  
    return 0;
}