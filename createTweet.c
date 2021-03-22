#include "headerA3.h"

tweet * createTweet(tweet * tweetList){
  tweet * ptr2 = NULL;
  tweet * ptr1;
  ptr1 = malloc(sizeof(tweet));
  int loop; // for error checking
  
  
  int i = 0;
  
  do{
    loop = 0;

    printf("Enter a username: ");
    scanf("%s", ptr1->user);

    //Error checking
    if(strlen(ptr1->user) > 51 || strlen(ptr1->user) == 0){
      printf("\nThat username is invalid, try again\n");
      loop = 1;
    }

  }while(loop == 1);
  
  do{
    loop = 0;

    printf("Enter the user's tweet: ");
    fgets(ptr1->text, 141, stdin);
    fgets(ptr1->text, 141, stdin);
    
    //Error checking
    if(strlen(ptr1->user) > 141){
      printf("\nThat tweet is too long, try again\n");
      loop = 1;
    }
    else if(strlen(ptr1->user) == 0){
      printf("\nYour tweet must contain at least one character, try again\n");
      loop = 1;
    }

  }while(loop == 1);

  //Summing the ascii values of the username
  while(ptr1->user[i] != '\0'){
    ptr1->id += ptr1->user[i];
    i++;
  }
  //Adding the length of the tweet
  ptr1->id += strlen(ptr1->text);

  // //checking if there is already a similar id
  tweetList = ptr1;

  if(ptr2 != NULL){
    ptr2 = tweetList;
    do{

      if(ptr1->id == ptr2->id){ 
        ptr1->id = (rand() & (999 + 1)) + ptr1->id;
      }

      ptr2 = ptr2->next;

    }while(ptr2 != NULL);
    
  }

  printf("Your computer-generated userID is: %d\n", ptr1->id);
  
  ptr1->next = NULL;
  
  return ptr1;
}