#include <stdio.h>

int main(){
    int n,t=0,f=0;
    scanf("%d",&n);

    int i=n-5;
    int sum=0;
    int k=1;
    while (i>2)
    {
        if( i % 3 == 0){
            sum = i/3 + k;
        }
        i-=5;
        k++;
    }

    int pr=0;
    if(n%5 == 0 ){
     printf("%d",n/5);
     return 0;
    }
    if(n%3 == 0 ) pr = n/3;

    if(sum !=0 && pr !=0){
        if(sum > pr){
        printf("%d", pr);
        return 0;
        } else {
        printf("%d",sum);
        return 0;
        }
    }
    if(sum == 0 && pr == 0){
        printf("-1");
        return 0;
    }
    if(sum == 0) printf("%d",pr);
    else printf("%d",sum);
}
