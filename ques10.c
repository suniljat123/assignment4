  #include<stdio.h>
int main()
{
    int n=5;
    printf("\nTable of %d=",n);
    for(int i=1;i<=10;i++)
        printf("\n%d*%d=%d",n,i,n*i);
    return 0;
}

