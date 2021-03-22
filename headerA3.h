/*
Student Name: Ethan Muir
Student ID: 1132341
Due Date: 21 March, 2021
Course: CIS*2500

I have exclusive control over this submission via my password.
By including this header comment, I certify that:

1) I have read and understood the policy on academic integrity.
2) I have completed Moodle's module on academic integrity.
3) I have achieved at least 80% on the academic integrity quiz

I assert that this work is my own. I have appropriate acknowledged
any and all material that I have used, be it directly quoted or
paraphrased. Furthermore, I certify that this assignment was written
by me in its entirety.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>	
#include <time.h>
#include <ctype.h>

typedef struct microtweet{
    int id; 				//unique integer value	
    char user[51]; 			// the userid / username of the person who wrote the tweet
    char text[141]; 		// the text of the tweet
   
    struct microtweet *next;  //dynamic connection to the next tweet
}tweet;


// menu functions 
tweet * createTweet( tweet * tweetList);

void displayTweets(tweet * tweetList);

int searchTweetsByKeyword(tweet * tweetList);

void countStopWords(tweet * tweetList);

void deleteTweet(tweet ** tweetList);

void saveTweetsToFile(tweet * tweetList);

void loadTweetsFromFile(tweet ** tweetList);

// linked list function - required after you create a tweet or load tweets from a file
void addNodeToList(tweet**tweetList,tweet * node);