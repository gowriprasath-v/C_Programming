#include <stdio.h>
int main(){
    int num,sum=0,temp;
    scanf("%d",&num);
    temp = num;
    while(num>0){
        int pro = 1;
        for(int i=1;i<=num%10;i++) pro*=i;
        sum += pro;
        num/=10;
    }
    if(sum == temp) printf("%d is a strong number.\n",temp);
    else printf("%d is not a strong number.\n",temp);
}
