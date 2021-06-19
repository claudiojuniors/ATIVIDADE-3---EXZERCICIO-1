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

