/*#include <stdio.h>
#include <stdlib.h>
int main() {
    int op_1[5]={1,2,3,4,5};
    int op_2[5]={6,7,8,9,10};
    int counter;
    int *ptr_1,*ptr_2,*ptr_3;
    ptr_1 = (int *) malloc(5*sizeof(int));
    ptr_2= (int *) malloc(5*sizeof(int));
    ptr_3=( int *) malloc(5*sizeof(int));
    for(counter=0; counter<5; counter++)
    {
        *(ptr_1+counter)=*(op_1+counter);
        *(ptr_2+counter)=*(op_2+counter);
    }

    for (counter=0; counter<5; counter++)
    {
        *(ptr_3+counter) = *(ptr_1+counter) + *(ptr_2+counter);
    }
    printf("Result List is\n");
    for (counter=0; counter<5; counter++)
    {
        printf("%d\n",*(ptr_3+counter));
    }
	return 0;
}
*/
