//
// Created br Lorenzo Latona Schettini on 09/12/2022
//

#include "lib.h"

float trovaMax(float mat[],int n){
  float a=mat[0];
  
  for(int i=1;i<n;i++){
    if(mat[i]>a){
      a=mat[i];
    }
  }
  return a;
}
