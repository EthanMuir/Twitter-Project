#include "headerA3.h"

void loadTweetsFromFile(tweet ** tweetList){
    tweet * ptr;
    ptr = malloc(sizeof(tweet));
    FILE * filePtr;
    char fileName[50];
    char line[200];
    printf("Enter a file name to load from: ");
    scanf("%s", fileName);

    filePtr = fopen(fileName, "r"); //open the file for reading

    if(filePtr == NULL){
        printf("There was an error opening your file\n");
        return;
    }

    while(fgets(line, 200, filePtr) != NULL){
        // Getting the information out of the file into the tweet
        char *token;
        token = strtok(line, ",");
        ptr->id = atoi(token);
        strcpy(ptr->user, strtok(NULL, ","));
        strcpy(ptr->text, strtok(NULL, ","));

        *tweetList = ptr;
        addNodeToList(tweetList, ptr);
       
    }

    printf("\nTweets imported!\n");
    free(ptr);
    fclose(filePtr);
    return;
}       
