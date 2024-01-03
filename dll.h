#include<stdio.h>
#include<stdlib.h>

struct Node
{
  void* data;
  struct Node *next;
  struct Node *prev;
};

// 0 based index. at(, 0) should give head. at(, size-1) should give tail.
// return NULL if idx is not valid.
struct Node* at(struct Node *head, int idx){

}


// Return 0 if succesful, else -1. (Why will it fail?)
// Semantics of insertAt:-
//  100 -> 200
//      insertAt(0, 99)
//  99 -> 100 -> 200
//      insertAt(3, 201)
//  99 -> 100 -> 200 -> 201
//      insertAt(2, 150)
//  99 -> 100 -> 150 -> 200 -> 201
//      insertAt(999, _)
//  99 -> 100 -> 150 -> 200 -> 201
//      insertAt(-1, _)
//  99 -> 100 -> 150 -> 200 -> 201
int insertAt(struct Node **head, int idx, void* data){

}

int insertAtInt(struct Node **head, int idx, int data){
}

// Same as insertAt
int deleteAt(struct Node **head, int idx){
 
}

// 99(head), 100, 150, 200(tail)
void display(struct Node *head){

}

