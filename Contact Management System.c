#include <stdio.h>
#include <stdlib.h>
void main(){
    char data[50],c;
    FILE *ptr;
    ptr=fopen("contacts.csv","a+");
    if(ptr==NULL){
        printf("System error occurred....");
        exit(0);
    }
    printf("***********************************\n");
    printf("*****Contact Management System*****\n");
    printf("***********************************\n");

    printf("Your overall contacts......\n\n");
    c=fgetc(ptr);
    while(c!=EOF){
        printf("%c",c);
        c=fgetc(ptr);
    }
    
    printf("\n\nEnter contact to store....\nFor example... John,9204234835 \n\n");
    fgets(data,50,stdin);
    fputs(data,ptr);
    fclose(ptr);
    printf("\nContact Added Successfully\n");
    
}