#include <time.h>
#include <stdio.h>
const int size = 8;

void MakArr(int *M){
  srand(time(NULL));
  int i;
  for(i=0; i<size;i++)
  M[i]=rand()%51;
}

void PrintArr(int *M){
  int i;
  for(i=0;i<size;i++)
  printf("%d ", M[i]);
}

void CopyArr(int *M, int *N){
  int i;
  for(i=0; i<size;i++)
  N[i]=M[i];
}

void Bubble(int *M){
  int i,a,b;
  for (b=0;b<size-1;b++)
  for (i=0;i<size-1;i++){
    if(M[i]>M[i+1]){
    a=M[i+1];
    M[i+1]=M[i];
    M[i]=a;
    }
  }
}

int main(){
  int A[size], B[size];
  MakArr(A);
  PrintArr(A);
  CopyArr(A,B);
  printf("\n");
  PrintArr(B);
  printf("\nSort: ");
  Bubble(B);
  PrintArr(B);
  CopyArr(A,B);
}
