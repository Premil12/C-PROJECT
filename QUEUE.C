QUEUE
Introduction
Queue is a data structure similar to stack,but the queue is open at both its ends. One
end is always used to insert data, known as enqueue and its other end is used to
remove data called dequeue. Queues follow First-In-First-Out(FIFO) logic,i.e. the
data stored first will be assessed first. There are many operations that can be
performed by using a queue like enqueue, dequeue,is full,isempty………

Pseudo code for queue

Procedure of queue(Q)
queue_isempty(Q)
 If front= rear
 then return true
else return false;
Queue_Enqueue(Q,x)
 If Queue_full(Q)
then “overflow”
Else rear(Q)=x
If rear(Q)=length(Q)
then rear (Q)=1
else rear(Q)= rear(Q)+1
Queue _Dequeue(Q)
If queue_isempty(Q)
Then “underflow”
Else x=front(Q)
 If front (Q)=length(Q)
Then front(Q)=1
Else front(Q)= front (Q)+1
queue _full(Q)
If rear(Q)=length(Q)
Then n=1
Else n=rear (Q)+1
If n=front(Q)
Then return true
Else return false
End procedure queue(Q)
Code of queue
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#define L 1024
int s[L];
size_t=0;
size_t quene_rear=0;
bool queue_is empty(void){
bool result;
 if (queue_front==queue_rear) //quene_front> quene_rear;
{
result = true;
}
else
{
result = false;
}
return result;
}
{
Void enqueue( intx) //insertion
{
s[++queue_rear-1]=x;
return;
}
int dequeue (void)// deletion
{
if(queue_isempty()){
printf( " underflow \n");
Exit (EXIT_FAILUE);
}
else
{
return s[++queue_rear-1];
}
}
int main()
{
int loadarr[] =
{ 52, -29, 36, -821, 790, -650, 1125, 72, 0, 68, 33, 59 };
size_t N = sizeof(loadarr) / sizeof(int);
printf("data to be inserted to queue:\n");
for (size_t i = 0; i != N; ++i)
{
printf("%d ", loadarr[i]);
}
printf("\n");
printf("enquene data into queue...\n");
for (size_t i = 0; i != N; ++i)
{
enqueue(loadarr[i]);
} // pop queue
printf("dequeueing data ..\n");
while (queue_empty() == false)
{
printf("%d ",dequeue());
}
return EXIT_SUCCESS;}
