
a3: mainA3.o createTweet.o displayTweets.o searchTweetsByKeyword.o countStopWords.o deleteTweet.o saveTweetsToFile.o loadTweetsFromFile.o addNodeToList.o 
	gcc -Wall -std=c99 mainA3.o createTweet.o displayTweets.o searchTweetsByKeyword.o countStopWords.o deleteTweet.o saveTweetsToFile.o loadTweetsFromFile.o addNodeToList.o -o a3

mainA3.o: mainA3.c headerA3.h
	gcc -Wall -std=c99 -c mainA3.c

createTweet.o: createTweet.c headerA3.h
	gcc -Wall -std=c99 -c createTweet.c

displayTweets.o: displayTweets.c headerA3.h
	gcc -Wall -std=c99 -c displayTweets.c

searchTweetsByKeyword.o: searchTweetsByKeyword.c headerA3.h
	gcc -Wall -std=c99 -c searchTweetsByKeyword.c

countStopWords.o: countStopWords.c headerA3.h
	gcc -Wall -std=c99 -c countStopWords.c

deleteTweet.o: deleteTweet.c headerA3.h
	gcc -Wall -std=c99 -c deleteTweet.c

saveTweetsToFile.o: saveTweetsToFile.c headerA3.h
	gcc -Wall -std=c99 -c saveTweetsToFile.c

loadTweetsFromFile.o: loadTweetsFromFile.c headerA3.h
	gcc -Wall -std=c99 -c loadTweetsFromFile.c

addNodeToList.o: addNodeToList.c headerA3.h
	gcc -Wall -std=c99 -c addNodeToList.c

clean:
	rm *.o a3