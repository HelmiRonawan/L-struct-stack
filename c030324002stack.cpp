#include <iostream>
#define MAX 5
using namespace std;

typedef int ItemType;
typedef struct{
  ItemType item[MAX];
  int count;
}stack;

void InitialStack(stack* S){
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
    cout << "Stack masih kosong!" << endl;
  }
  else{
    --(S->count);
    *X = S->item[S->count];
    cout << "Nilai yang di-pop: " << *X <<endl;
  }
}

void push(ItemType x, stack* S){
  if (S->count == MAX)
  {
    cout << "Stack penuh,tidak dapat memasukkan data!" << endl;
  }
  else{
    S->item[S->count] = x;
    ++(S->count);
  }
  
}

int main(){
  stack nilai;
  ItemType x;

  InitialStack(&nilai);
  full(&nilai);
  push(40,&nilai);
  push(80,&nilai);
  push(60,&nilai);
  push(50,&nilai);
  push(90,&nilai); //ini akan masuk
  push(100,&nilai); // tidak akan masuk

  if (empty(&nilai)) {
    cout << "Stack kosong!" << endl;
  } else {
    cout << "Stack tidak kosong!" << endl;
  }

  pop(&nilai,&x); 
  push(30,&nilai);
  push(50,&nilai); // uji stack penuh
  pop(&nilai,&x); 
  pop(&nilai,&x); 
  pop(&nilai,&x); 
  pop(&nilai,&x); // menunjukkan stack kosong
  }