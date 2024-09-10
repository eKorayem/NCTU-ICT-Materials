#include <iostream>
using namespace std;

enum Error_Code {
    underflow = -1,
    success = 0,
    overflow = 1
};

#define Max_Queue 100
#define QueueEntry int

struct Queue
{
    int front, rear, size;
    QueueEntry entry[Max_Queue];
};

void createQueue(Queue *pq){
    pq->front = 0;
    pq->rear = -1;
    pq->size = 0;
}

Error_Code Append(Queue *pq, QueueEntry e){
    if (pq->size==Max_Queue) return overflow;
    pq->rear = (pq->rear+1) % Max_Queue;
    pq->entry[pq->rear] = e;
    pq->size ++;
    return success;
}

Error_Code Serve(Queue *pq, QueueEntry &e){
    if(pq->size==0) return underflow;
    e = pq->entry[pq->front];
    pq->front = (pq->front-1) % Max_Queue;
    pq->size -- ;
    return success;
}

void travarse(Queue *pq, void (*pf) (QueueEntry)){
    int pos = pq->front;
    for (int i=0; i!=pq->size; ++i){
        (*pf)(pq->entry[pos]);
        pos = (pos+1) % Max_Queue;
    }
}

int queueSize(Queue *pq){
    return pq->size;
}

void ClearQueue(Queue *pq){
    pq->front=0;
    pq->rear=-1;
    pq->size=0;
}

bool QueueEmpty(Queue *pq){
    return !pq->size;
}

bool QueueFull(Queue *pq){
    return (pq->size == Max_Queue);
}

void display(QueueEntry e){
    cout << "Item: " << e << endl;
}

void reverseQueue(Queue *pq){
    int ttemp = pq->front;
    pq->front = pq->rear;
    pq->rear = ttemp;
}

int main()
{
    Queue q;
    QueueEntry ee;
    createQueue(&q);
    Append(&q, 1);
    Append(&q, 2);
    Append(&q, 3);
    Append(&q, 4);
    
    travarse( &q, &display);
}