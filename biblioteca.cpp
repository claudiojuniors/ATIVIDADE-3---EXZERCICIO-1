#include<iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
// ESTRUTURA TCOMPLEXOS SOLICITADA PELO EXERCICIO
struct tComplexos{
      float *real;
      float *imag;
    }pComplexos;

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

//ESTRUTURA QUE IRÁ REALIZAR A SOMA DOS COMPLEXOS

int somaComplex ( int real,int imag, int a, int b, int c,int d, int result){
  
  a=2;
  b=5;
  c=3;
  d=1;

  real = a+c;
  imag = b+d;


  return real, imag;

}