#include "headerA3.h"

void displayTweets(tweet * tweetList){
  tweet *ptr;

  if(tweetList == NULL){

    printf("There are no tweets!\n");
    return;   

  }
  else{
    ptr = tweetList;
    
    while(ptr != NULL){ //Stepping through the list and printing all the tweets

      printf("%d: Created by: %s: %s\n", ptr->id, ptr->user, ptr->text);
      ptr = ptr->next;

    }

  }
  
}