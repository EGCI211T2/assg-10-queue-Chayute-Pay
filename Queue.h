
#ifndef queue_h
#define queue_h
#include "Node.h"
class Queue {
	NodePtr headPtr,tailPtr;
	int size;
public:
    void enqueue(int);
    int dequeue();
    Queue();
    ~Queue();
};


void Queue::enqueue(int x){
  NodePtr new_node= new NODE(x);
if(new_node){
  if(size == 0)
  {
    headPtr = new_node;
    tailPtr = new_node;
  }  
  else
  {
  tailPtr->set_next(new_node);
  tailPtr = new_node;
  }
  size++;
 }
 /* Add head and tail for me please */
  /* 1. connect & Change tail
  2. (may be) change head  when the queue is empty
  3. increase size */
}

int Queue::dequeue(){
  if(headPtr!=NULL){
     NodePtr t=headPtr;
     int value= t->get_value();
     headPtr = headPtr->get_next();
    if(size == 1){
      headPtr = NULL;
      tailPtr = NULL;
    }
    size--;
    cout<<"dequeing "<<value<<endl;
     delete t;
     return value;
  }
  /* Add head and tail for me please */
  cout<<"Empty queue";
  return -1;
}


Queue::Queue(){
  headPtr = NULL;
  tailPtr = NULL;
  size = 0;
    //initialize Queue
    
}
Queue::~Queue(){
  cout<<"Clearing Queue"<<endl;
  while(size>0)
  {
    dequeue();
  }
    //delete all remaning Queue (i.e. DQ all) 
    
}


#endif
