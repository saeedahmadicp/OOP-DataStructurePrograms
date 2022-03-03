#include <iostream>
#define STACK_SIZE 1024

static int top=0;
static int contents[STACK_SIZE];
enum status_t {FAILURE, SUCCESS};

using namespace std;

static bool is_empty(void){

return top==0;}

static bool is_full(void){

return top== STACK_SIZE;}

extern status_t push(int data){

  if(is_full()) return FAILURE;
   contents[top++] = data;
   return SUCCESS;
}


extern status_t pull(int *data){

  if(is_empty()) return FAILURE;

   *data = contents[--top];
   return SUCCESS;
}

extern int size(void){

return top;}



