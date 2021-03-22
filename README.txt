Student Name: Ethan Muir
Username: emuir
Student ID: 1132341
Assignment: Twitter Manager
Date of last revision: 21 March, 2021
Due Date: 21 March, 2021
Course: CIS*2500

How to compile and run: 
-To compile all files, type "make" into the terminal
-To run the program, type "./a3" into the terminal

Completed Components:
-Create a tweet: This funciton allows a user to input the tweet's username and text, and it will then compute the userId and adds the info to a linked list
-AddNodeToList: This funciton adds a node to the linked list for the new information, this begins to execute after the first tweet is created
-Display tweets: This function displays the current tweets that are in the linked list by stepping through it and printing out each one to the screen
-Search a Tweet: This function allows the user to search a tweet by a keyword, it uses the funciton, strstr, to find any occurence of the keyword inside the text of he tweet
-Find stop words: This funciton uses, strTok to seperate the tweet into words and compares them to stopwords to see if they are one. It then prints the amount of stopwrods across the tweets
-Delete nth tweet: This function steps through the linked list until it gets to a certain position and deletes the tweet in that postion that was given by the user
-Save tweets: This function will open a file of a given name and uses fprintf to send the tweets to that file, with the information seperated by commas
-Load tweets: ---COMPLETE THIS----

Limitations:
-is able to have two of the same id'same
-Adds a strange node for the first node when using load tweets
-Gets a little off of the correct id

Future imporvements:
-For the future, i would add maybe add functions to step a linked list instead of doing it manunally with a large while loop every time