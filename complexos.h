#include<iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
// ESTRUTURA TCOMPLEXOS SOLICITADA PELO EXERCICIO
struct tComplexos{
      float *real;
      float *imag;
    }s1,s2;
// INICIALIZANDO AS VARIAVEIS 

void InicializarComplexo(struct tComplexos* pComplexos){
    pComplexos -> real =0;
    pComplexos -> imag =0;
}
//FUNÇÃO PARA LER OS NUMEROS COMPLEXOS

void leiaComplexo(struct tComplexos* pComplexos){
  for (int i=0;i<2;i++){
      &pComplexos[i].real;
      &pComplexos[i].imag;
  }
}

//FUNÇÃO QUE VAI ESCREVER OS NUMEROS COMPLEXOS

void escreveComplexo(struct tComplexos* pComplexos){
  cout<<"o número complexo é: "<< pComplexos->real<<"+"<< pComplexos->imag<<"*i" << endl;

}

//FUNÇÃO QUE IRÁ REALIZAR A SOMA DOS COMPLEXOS

int somaComplex ( int real,int imag, int a, int b, int c,int d, int result){
  
  a=2;
  b=5;
  c=3;
  d=1;

  real = a+c;
  imag = b+d;

  return real, imag;
}

//FUNÇÃO QUE IRÁ REALIZAR A SUBTRAÇÃO

int subtraiComplex ( int real,int imag, int a, int b, int c,int d, int result){
  
  a=2;
  b=5;
  c=3;
  d=1;

  real = a-c;
  imag = b-d;

  return real, imag;
}

// ESTRUTURA QUE IRÁ MULTIPLICAR OS COMPLEXOS 

struct tComplexos(int cnum1, int cnum2, int mul){ 

cnum1=5;
cnum2=3;

cin>>&cnum1.real, &cnum1.imag;
cin>>&cnum2.real, &cnum2.imag;
mul.real = cnum1.real * cnum2.real - cnum1.imag * cnum2.imag;
mul.imag = cnum1.real * cnum2.imag + cnum2.real * cnum1.imag; 
cout<<mul.real, mul.imag<<endl;

return 0; }

//ESTRUTURA QUE IRÁ FAZER A DIVISÃO 

float  divComplex (float num1, float num2){
  
num1=(((s1.real)*(s2.real))+((s1.imag)*(s2.imag)))/(pow(s2.real,2)+pow(s2.imag,2));
num2=(((s2.real)*(s1.imag))-((s1.real)*(s2.imag)))/(pow(s2.real,2)+pow(s2.imag,2));
cout<<“nDivision: “<<“(“<<num1<<“)”<<“+”<<“(“<<num2<<“)”<<“i”;

getch();


}