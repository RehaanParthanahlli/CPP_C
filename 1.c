/*#include<stdio.h>
int main(){
    printf("Hello");
}*/

// Read Notebook
// File Handling do it Later!

//malloc
/*#include <stdio.h>
#include <stdlib.h>
int main(){
    int number=0;
    printf("Enter the number of elements :");
    scanf("%d",&number);
    int *ptr = (int*)malloc(number*sizeof(int));
    for(int i=0;i<number;i++){    
        scanf("%d",&ptr[i]);                     //if input wasn't given then random number will be generated but calloc(n,sizeof(int)) will make {0,0,0,.........,n Zeroes}
    }        
    int *temp=realloc(ptr,10*sizeof(int));
    ptr=temp;                                    // malloc is fast but calloc is clean
    temp=NULL;                              
    free(ptr);
    ptr=NULL;
}*/