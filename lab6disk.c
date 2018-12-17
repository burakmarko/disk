#include <stdio.h>
#include <cs50.h>


int fact(int n); int C(int k);

int main()
{
int n=GetInt(); int arr[n];
for(int i=0;i<n;i++)
arr[i]=i+1;
int j;


for(int i=0;i<n;i++)
{
    for(j=i;j<n;j++)
    printf("{%d;%d} ",arr[i],arr[j]); printf("\n");
}
    printf("BINOM PART\n"); for(int i=0;i<6;i++)
{

    printf("%d*x^%d*(-y)^%d + ", C(i),i,6-i);

}
    printf("%d*x^%d*(-y)^%d\n ", C(6),6,6-6);


}
int C(int k)
{
int C=fact(6)/(fact(6-k)*fact(k));
 return C;
}


int fact(int n)
{
int l=1;
for(int i=1;i<=n;i++){
    l=i*l;
   }
  return l;
}
