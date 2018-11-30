#include<stdio.h> //libraries
int main() 
{
int x,y,z; //variables
//scanning and memorizing variables that we printed 
printf("print x");
scanf("%d",&x);

printf("print y");
scanf("%d",&y);

printf("print z");
scanf("%d",&z);
//cycles for different options 
if((x==0)&&(y==0)&&(z==1))
{printf("1\n");}
else if ((x==1)&&(y==1)&&(z==1))
{printf("1\n");}
else if ((x==1)&&(y==1)&&(z==0))
{printf("1\n");}
else if ((x==1)&&(y==0)&&(z==0))
{printf("1\n");}
else if ((x==0)&&(y==1)&&(z==1))
{printf("1\n");}
else if ((x==0)&&(y==1)&&(z==0))
{printf("1\n");}
else if ((x==1)&&(y==0)&&(z==1))
{printf("1\n");}
else if ((x>1)||(x<0)||(y>1)||(y<0)||(z>1)||(z<0))
//option when any of the numbers is out of the massive [0;1]
{printf("bad variables\n");}
}
