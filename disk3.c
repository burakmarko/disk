#include <stdio.h>
#include <math.h>

int main(){
 
 // Enter arrays A and B 
 
 
 int size;
 printf("Enter size of arrays: ");
 scanf("%d", &size);
 
 printf("Array A:\n");
 
 int A[size];
 
 for(int i=0; i<size; i++){
    printf("A[%d] = ", i);
    scanf("%d", &A[i]);
 }
 
 int B[size];
 
 printf("\nArray B:\n");
 
 for(int i=0; i<size; i++){
    printf("B[%d] = ", i);
    scanf("%d", &B[i]);
 }
 
 printf("\nA = ");
 
 for(int i=0; i<size; i++){
    printf("%d ", A[i]);
 }
 
 printf("\n");
 
 printf("B = ");
 
 for(int i=0; i<size; i++){
    printf("%d ", B[i]);
 }
 printf("\n");
 
 // Generate the binary matr 
 
 int matr[size][size];
 
 for(int r=0; r<size; r++){
    for(int c=0; c<size; c++){
        if(2*A[r]+1<(B[c]))
        matr[r][c] = 1;
        else
        matr[r][c] = 0;
 }
 }
 
 // Print binary matr 
 
 printf("\n");
 
 for(int r=0; r<size; r++){
    for(int c=0; c<size; c++){
        printf("%d ", matr[r][c]);
        if(c==size-1)
        printf("\n");
 }
 }
 
 //Generate inverse matr 
 
 int antimatr[size][size];
 
 for(int r=0; r<size; r++){
    for(int c=0; c<size; c++){
    antimatr[r][c] = matr[c][r];
 }
 }
 
 // Check for 0 
 
 int check = 0;
 
 for(int r=0; r<size; r++){
    for(int c=0; c<size; c++){
        if(matr[r][c]== 1)
        check = 1;
 }
 }
 
 // Check for reflexivnist 
 
 printf("\n");
 
 int param1=1;
 
 for(int i=0; i<size; i++){
       if (matr[i][i]==0)
       param1=0;
 }
 if(param1==1)
    printf("This matr is reflexive.\n");
 else if(param1==0)
    printf("This matr is not reflexive.\n");
    
 
 //Check for antireflexivnist
 
 int param2=0;
 
 for(int i=0; i<size; i++){
    if (matr[i][i]==1)
    param2=1;
 }
 if(param2==0)
    printf("This matr is antireflexive.\n");
 else if(param2==1)
    printf("This matr is not antireflexive.\n");
 
 // Check for symmetry 
 
 int param3=1;
 
 for(int r=0; r<size; r++){
    for(int c=0; c<size; c++){
        if((r!=c) && (antimatr[r][c]!=matr[r][c]))
        param3 = 0;
 }
 }
 
 if(param3==1)
    printf("This matr is symmetric\n");
 else if(param3==0)
    printf("This matr is not symmetric\n");
 
 // Check antisymmetry
 
 int param4=0;
 
 for(int r=0; r<size; r++){
    for(int c=0; c<size; c++){
        if((r!=c) && (antimatr[r][c]==matr[r][c]))
 param4 = 1;
 }
 }

 if(param4==0)
    printf("This matr is antisymmetric\n");
 else if(param4==1)
    printf("This matr is not antisymmetric\n");
 
 // Check transitivity 
 
 int Asize = size*10;
 
 int Anew[Asize];
 
 int ai=0;
 
 for(int i=0; i<size; i++){
    for(int j=0; j<size; j++){
        for(int k=0; k<size; k++){
            //if((i!=j && i!=k && j!=k) && (matr[i][j] == 0 || matr[j][k] == 0))
            //Anew[ai]=1;
            if((i!=j && i!=k && j!=k) && (matr[i][j] == 1 && matr[j][k] == 1 && matr[i][k] == 1))
            Anew[ai]=1;
            else if ((i!=j && i!=k && j!=k) && (matr[i][j] == 1 && matr[j][k] == 1 && matr[i][k] == 0))
            Anew[ai]=0;
            else
            Anew[ai]=1;
            ai++;
 }
 }
 }

 int param5 = 1;
 for (int i=0; i<Asize; i++){
    if(Anew[i]==0)
    param5=0;
 }
 if(check == 0)
 param5 = 0;

 if(param5==1)
    printf("This matr is transitive\n");
 else if(param5==0)
    printf("This matr is not transitive\n");
 
 // Check for antitransitivity 
 int Bsize = size*10;

 int Bnew[Bsize];
 
 int bi=0;
 
 for(int i=0; i<size; i++){
    for(int j=0; j<size; j++){
        for(int k=0; k<size; k++){
            //if((i!=j && i!=k && j!=k) && (matr[i][j] == 0 || matr[j][k] == 0))
            //Bnew[bi]=1;
            if((i!=j && i!=k && j!=k) && (matr[i][j] == 1 && matr[j][k] == 1 && matr[i][k] == 1))
            Bnew[bi]=0;
            else if ((i!=j && i!=k && j!=k) && (matr[i][j] == 1 && matr[j][k] == 1 && matr[i][k] == 0))
            Bnew[bi]=1;
            else
            Bnew[bi]=1;
            bi++;
 }
 }
 }

 int param6 = 1;
 
 for (int i=0; i<Bsize; i++){
    if(Bnew[i]==0)
    param6=0;
 }
 if(check == 0 || param5==1)
    param6 = 0;

 if(param6==1)
    printf("This matr is antitransitive\n");
 else if(param6==0)
    printf("This matr is not antitransitive\n"); 
    printf("\n");
}
