#include "headerA3.h"

void countStopWords(tweet * tweetList){
    int numStopWords = 0;
    int numTweets = 0;
    tweet * ptr = tweetList;
    char * stopWords[25] = { "a", "an", "and", "are", "as","at","be","by","for","from","has","he","in","is","it","its","of","on","that","the","to","was","were","will","with"};

    if(tweetList == NULL){  //If there are no tweets yet
        printf("There are no tweets!\n");
        return;   
    }
    else{

        while(ptr != NULL){
            char *token;
            char text[141];
    
            strcpy(text, ptr->text);    //getting the tweet into a varible
            token = strtok(text, " .:;-");  //strTok seperates the words in the tweet so we can compare them 
            do{

                //Loop to itterate through evrey stop word
                for(int i = 0; i < 25; i++){

                    if(strcmp(token, stopWords[i]) == 0){   //If the current word is a stop word
                        numStopWords++;
                        break;
                    }

                }
                token = strtok(NULL, " .:;-");  //Resetting the token
            }while(token != NULL);

            ptr = ptr->next;    //Stepping the linked list
            numTweets++;  
        }

    }
    printf("Across %d tweet(s), %d stopWord(s) were found.\n", numTweets, numStopWords);
    return;
}
