#include "headerA3.h"

int searchTweetsByKeyword(tweet * tweetList){
    tweet *ptr;
    char keyWord[50];
    int matchFound = 0;
    printf("Enter a keyword to search: ");
    scanf("%s", keyWord);

    //Loop to make string to lowercase
    for(int i = 0; keyWord[i]; i++){
        keyWord[i] = tolower(keyWord[i]);
    }
    

    if(tweetList == NULL){  //If there are no tweets yet
        printf("There are no tweets!\n");
        return 0;   
    }
    else{
        ptr = tweetList;
        while(ptr != NULL){

            if(strstr(ptr->text, keyWord) != NULL){ //Funciton strstr checks if one string is contained inside another one
                printf("Match found for '%s': %s wrote: %s", keyWord, ptr->user, ptr->text);
                matchFound = 1;
            }
            ptr = ptr->next;

        }
    }

    if(matchFound == 1){
        return 1;
    }
    else{
        printf("No match was found for that word.\n");
    }
    return 0;
}