# include<stdio.h>

//WAP TO CHECK GREATEST NUMBER BETWEEN THREE NUMBER USING NESTED IF-ELSE CONDITION::
int main(){
    int a,b,c;
    printf("enter three number a,b,c resp::");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(a>c)
        printf("A greatest");
    }
    else if(b>c)
    printf("B greatest");
    else
    printf("C greatest");
}    
    
    

