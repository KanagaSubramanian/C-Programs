#include<stdio.h>
int main(){
int n=123456,count=0,pow=1,ind=-1;
int safe=n;
while(n){
    n=n/10;
    count++;
    pow=pow*10;
}
pow=pow/10;
int num_arr[count];
while(count){
    ind++;
    num_arr[ind]=(safe/pow)%10;
    pow=pow/10;
    printf("IND:%d-NUM:%d\n",ind,num_arr[ind]);
    count--;
}
//printf("%d",safe);
return 0;
}

//OUTPUT
/*
IND:0-NUM:1
IND:1-NUM:2
IND:2-NUM:3
IND:3-NUM:4
IND:4-NUM:5
IND:5-NUM:6

Process returned 0 (0x0)   execution time : 0.213 s


