#include<stdio.h>

int tab[15];

int main(){
int a=6;
int *x=&tab[0];
int b=9;
int *y=&tab[15];
long suma=(y-x);
 
printf("Tablica %ld liczb w kolejności:\n",suma);

for(int i=0;i<suma;i++){
    tab[i]=i+1;
    printf("%d\n",tab[i]);
}
}