#include <iostream>
#define MAX 5
using namespace std;

typedef int ItemType;
typedef struct{
  ItemType item[MAX];
  int count;
}stack;

void InitializeStack(stack* S){
  S->count = 0;
}

int full(stack* S){
  return (S ->count == MAX); // oper push
}

int empty(stack* S){
  return (S->count == 0 ); // oper pop
}

void pop(stack* S, ItemType* X){
  if(S->count==0){
    cout << "none stack" << endl;
  }
  else{
    --(S->count);
    *X = S->item[S->count];
  }
}

void push(ItemType x, stack* S){
  if (S->count == MAX)
  {
    cout << "the stack is full" << endl;
  }
  else{
    S->item[S->count] = x;
    ++(S->count);
  }
  
}