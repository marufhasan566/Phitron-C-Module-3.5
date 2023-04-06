#include<stdio.h>
int main()
//{for loop syntax}
// {
//     int n;
//     printf("Enter the value of N = ");
//     scanf("%d",&n);
//     for(int i=1;i<n;i--){
//         printf("Print this line infinity times\n");
//     }
//     return 0;
// }

//{While loop syntax}
// {
//     {
//     int n;
//     printf("Enter the value of N = ");
//     scanf("%d",&n);
//     int i=0;
//     while(i<n){
//         printf("Print this line infinity times\n");
//         i--;
//     }
//     return 0;
// }
// }

//{Do while loop syntax}
{
    {
    int n;
    printf("Enter the value of N = ");
    scanf("%d",&n);
    int i=0;
    do{
        i--;
        printf("Print this line infinity times\n");
        }
    while(i<n);
    return 0;
}
}