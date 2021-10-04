#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int f;
    int r;
    int *arr;
};

void enqueue(struct queue *q,int value)
{
    if(isFull(q))
    {
        printf("this Queue is Full");
    }
    else
    {
        q->r=q->r+1;
        q->arr[q->r]=value;
    }
}

int isFull(struct queue *q)
{
    if(q->r==q->size-1)
        return -1;
    return 0;
}

int isEmpty(struct queue *q)
{
    if(q->f==q->r)
        return 1;
    return 0;
}
int dequeue(struct queue *q)
{
    int a=-1;
    if(isEmpty(q))
    {
        printf("This Queue is Empty");
    }
    else
    {
        q->f++;
        q=q->arr[q->f];
    }
    return a;
}
int main()
{
    struct queue q;
    q.size=100;
    q.f=q.r=-1;
    q.arr=(int *)malloc(q.size*sizeof(int));
    enqueue(&q,12);
    enqueue(&q,5);
    printf("Dequeuing element %d",dequeue(&q));
}

