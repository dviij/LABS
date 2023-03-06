#include <stdio.h>

void tower(int n , char  from_rod, char to_rod , char aux_rod)
{
    if (n==1)
    {
        printf("Move the disk 1 from %c to rod %c\n",from_rod,to_rod);
        return;
    }
    tower(n-1,from_rod, aux_rod,to_rod);
    printf("move disk %d from rod %c to rd %c \n",n, from_rod,to_rod);
    tower(n-1,aux_rod,to_rod,from_rod);

}

int main (){
    int n ;
    printf("Enter the number of disks :");
    scanf("%d",&n);
    tower(n,'a','c','b');
    return 0;
}