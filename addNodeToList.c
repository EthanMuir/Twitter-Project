#include "headerA3.h"

void addNodeToList(tweet**tweetList,tweet * node){
    tweet * temp = malloc(sizeof(tweet));
    tweet * last = *tweetList;

    temp->id = node->id;
    strcpy(temp->user, node->user);
    strcpy(temp->text, node->text);
    
    if(*tweetList == NULL){
        *tweetList = temp;
        return;
    }
    else{
        while(last->next != NULL ){
            last = last->next;
        }
    }

    last->next = temp;
    return;
    free(temp);
}