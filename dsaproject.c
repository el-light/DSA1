//Source file


#include  "dsaproject.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

T_Elector creationelector(void){
    printf("How many electors do you want? "); 
    int n ; 
    scanf("%d", &n);
    T_Elector *elector1 = NULL ;
    T_Elector *other = NULL;
    for(int i=0 ; i<n;i++){
        if(i==0){
            elector1= malloc(sizeof(T_Elector)); 
            if(elector1 == NULL){
                printf("Memory allocation problem");
                exit(1);
            }
            other = elector1; 
        }else{
         other->next = malloc(sizeof(T_Elector));   
         other = other->next;

        }
        printf("Enter the name of the voter: "); 
        fgets(other->name, 100 , stdin); 
    }
}

// testing