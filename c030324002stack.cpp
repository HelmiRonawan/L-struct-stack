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