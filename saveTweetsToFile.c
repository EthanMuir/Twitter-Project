#include "headerA3.h"

void saveTweetsToFile(tweet * tweetList){
    char fileName[50];
    FILE * filePtr;
    tweet *ptr;
    printf("Enter the file name you'd like to save your tweets to: ");
    scanf("%s", fileName);
    
    filePtr = fopen(fileName, "w"); //open the file for writing

    if(filePtr == NULL){
        printf("There was an error opening your file\n");
        return;
    }

    if(tweetList == NULL){

        printf("There are no tweets yet!\n");
        fclose(filePtr);
        return;   

    }
    else{
        ptr = tweetList;
        while(ptr != NULL){
            fprintf(filePtr, "%d,%s,%s", ptr->id, ptr->user, ptr->text);
            ptr = ptr->next;
        }
    }
    
    printf("Output successful!\n");
    fclose(filePtr);
    return;
}