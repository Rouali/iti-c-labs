#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    int i;
    printf("Enter size of array : ");
    scanf("%d",&size);
    int *ptr=(int*)malloc(size*sizeof(int));
    if( ptr!= NULL ){
        for(i=0;i<size;i++){
            printf("Enter arr[%d] : ",i+1);
            scanf("%d",&ptr[i]);
        }
         for(i=0;i<size;i++){
            printf("Array = %d \n",ptr[i]);
        }
         free(ptr);

    }

    return 0;
}
