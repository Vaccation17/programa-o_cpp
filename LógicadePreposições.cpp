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
    // Negação
    
    //bool a = 1;
    //a = !a;
    //cout<<a;
    
    
    //Conjunção
    cout<< "CONJUNÇÂO (e)";
    
    bool chuva = true;
    bool nublado = true;
    bool e = chuva && nublado;
    
    cout<< "\nHoje está chovendo e hoje está sol. Valor = "<<e;


    cout<<  "\nChuva. Valor = "<< chuva;
    cout<< "\nNublado. Valor = "<< nublado;
    
    //Disjunção
    
    cout<<"\n";
    cout<<"\n Disjunção (ou)";
    
    bool ou = chuva || nublado;
    
    cout<<  "\nChuva. Valor = "<< chuva;
    cout<< "\nNublado. Valor = "<< nublado;
    cout<< "\nHoje está chovendo ou hoje está sol. Valor = "<<ou;
    
    //Condicional
    
    cout<<"\n";
    cout<<"\nCondicional (se, então)";
    
    chuva = false;
    nublado = false;
    
    bool se = !chuva || nublado;
    
    cout<<  "\nChuva. Valor = "<< chuva;
    cout<< "\nNublado. Valor = "<< nublado;
    cout<< "\nSe Hoje está chovendo, então hoje está nublado. Valor = "<<se;
    
    
    
    
    
}