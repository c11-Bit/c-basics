//求两数最大公约数（循环）
#include<stdio.h>
int gcd(int a,int b){
    if(a<0) a=-a;
    if(b<0) b=-b;
    if(a==0) return b;
    if(b==0) return a;
    while(b!=0){
        int c=a%b;
        a=b;
        b=c;
    }
    return a;
}
int main(){
    int a, b,res;
    scanf("%d %d",&a,&b);
    gcd(a,b);
    res=gcd(a,b);
    printf("%d",res);
    return 0;
}