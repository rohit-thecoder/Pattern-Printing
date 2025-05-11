#include<stdio.h>
int main(){
    int n;
    printf("Enter no of Rows: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int p=1; p<=n-i; p++){
            printf(" ");
        }
        for(int j=1; j<=i; j++){
            printf("%c", j+64);
        }
        for(int k=1; k<=i-1; k++){
            printf("%c", k+64);
        }
        printf("\n");
    }
}