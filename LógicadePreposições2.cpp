/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
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
    
    bool chuva = false;
    bool nublado = false;
    bool e = chuva && nublado;
    
    cout<< "\nHoje está chovendo e hoje está sol. Valor = "<<e;


    cout<<  "\nChuva. Valor = "<< chuva;
    cout<< "\nNublado. Valor = "<< nublado;
    cout<< "\n-----------------------------------------------------------";
    
    //Disjunção
    
    cout<<"\n";
    cout<<"\n DISJUNÇÂO (ou)";
    
    bool ou = chuva || nublado;
    
    cout<<  "\nChuva. Valor = "<< chuva;
    cout<< "\nNublado. Valor = "<< nublado;
    cout<< "\nHoje está chovendo ou hoje está sol. Valor = "<<ou;
    cout<<"\n------------------------------------------------------------";
    
    //Condicional
    
    cout<<"\n";
    cout<<"\nCONDICIONAL (se, então)";
    
    chuva = false;
    nublado = false;
    
    bool se = !chuva || nublado;
    
    cout<<  "\nChuva. Valor = "<< chuva;
    cout<< "\nNublado. Valor = "<< nublado;
    cout<< "\nSe Hoje está chovendo, então hoje está nublado. Valor = "<<se;
    cout<< "\n------------------------------------------------------------------";
    
    //Bi-Condicional
    
    chuva = true;
    nublado = false;
    
    cout<<"\n";
    cout<<"\nBI_CONDICIONAL (se, somente se)";
    
    bool bicond= !(chuva||nublado) ||(chuva&&nublado);
    
    cout<<"\nSe hoje chover,e se somente estiver chovendo, estará nublado. Valor = "<<bicond;
    
    //
    
    return 0;
}