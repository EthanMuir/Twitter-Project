#include "headerA3.h"

void deleteTweet(tweet ** tweetList){
    tweet *ptr;
    tweet *temp;
    int numTweets = 0;
    int deleteNum;

    //Counting the amount of tweets
    if(*tweetList == NULL){

        printf("There are no tweets!\n");
        return;   

    }
    else{

        ptr = *tweetList;
        while(ptr != NULL){
            numTweets++;
            ptr = ptr->next;
        }

    }

    printf("Currently there are %d tweet(s).\nWhich tweet do you wish to delete - choose from 1-%d: ", numTweets, numTweets);
    scanf("%d", &deleteNum);
    
    if(deleteNum == 1){   //If they want to take from the first tweet

        ptr = *tweetList;
        printf("Tweet %d deleted. %d tweet(s) remain.\n", ptr->id, (numTweets - 1));
        *tweetList = (*tweetList)->next;   //Making the first adress equal to the next one
        

    }
    else{

        ptr = *tweetList;

        for(int i = 0; i < (deleteNum -1); i++){
            
            temp = ptr;
            ptr = ptr->next;

            if(ptr == NULL){
                printf("There is no tweet in that position\n");
                return;
            }
        }
        
        printf("Tweet %d deleted. %d tweet(s) remain.\n", ptr->id, (numTweets - 1));
        temp->next = ptr->next;
        
    }

    return;
}