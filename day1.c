




#include<stdio.h>
int main(){
    int n,i,s=0;
    printf("enter how many natural number you want to add");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s=s+i;
    }
    printf("the sum is=%d",s);
    return 0;
}
 #include<stdio.h>
int main(){
    int n,i;
    printf("enter number to print multiplication table");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        printf("%d*%d=%d\n",n,i,(n*i));
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n,i,fact;
    printf("enter a number");
    scanf("%d",&n);
    i=1,fact=1;
    for(i=1;i<=n;i++){
        fact = fact*i;
    }
    printf("the factorial of a number is=%d",fact);
    return 0;
}
#include<stdio.h>
int main(){
    int n,count=0;
    printf("enter a numer");
    scanf("%d",&n);
    while(n!=0){
        n = n/10;
        count++;
    }
    printf("total digit=%d",count);
    return 0;
 
}
 
