#include "headerA3.h"

int main () 
{
  int n;
  int loop = 0;
  tweet * tweetList = NULL;
  tweet * currNode;
  tweet * firstNode;
  
  do{
    
    while(n != 8){
      //Program intro
      printf("------------------------------\n");
      printf("--- Welcome to Twitter-ish ---\n");
      printf("------------------------------\n");
      printf("\nWhat would you like to do?\n");
      printf("1: Create a new tweet\n");
      printf("2: Display tweets\n");
      printf("3: Search a tweet (by keyword)\n");
      printf("4: Find how many words are “stop words” \n");
      printf("5: Delete the nth tweet\n");
      printf("6: Save tweets to a file\n");
      printf("7: Load tweets from a file\n");
      printf("8: Exit\n");
      printf("Enter a number: \n");
      scanf("%d", &n);

      // function calls
      if(n == 1){
        currNode = createTweet(tweetList);

        if(firstNode == NULL){
          firstNode = currNode;
        }
        else{
          addNodeToList(&firstNode, currNode);
        }

      }
      else if(n == 2){
        displayTweets(firstNode);
      }
      else if(n == 3){
        searchTweetsByKeyword(firstNode);
      }
      else if(n == 4){
        countStopWords(firstNode);
      }
      else if(n == 5){
        deleteTweet(&firstNode);
      }
      else if(n == 6){
        saveTweetsToFile(firstNode);
      }
      else if(n == 7){
        loadTweetsFromFile(&firstNode);
      }
      else if(n == 8){
        printf("See ya later!\n");
        return 0;
      }
      else{
        loop = 1;
        printf("That's not a number form 1 to 8, please try again\n");
      }
    }

  }while(loop == 1);  

  free(currNode);
}