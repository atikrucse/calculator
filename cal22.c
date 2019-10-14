#include<stdio.h>

int multyPlay(int a, int b){
    int multyPlat=a*b;
    printf("Multyplaycation= %d\n",multyPlat);
}

int main(){
    int firstNumber,secondNumber;
    scanf("%d %d",&firstNumber,&secondNumber);
    multyPlay(firstNumber,secondNumber);

}
