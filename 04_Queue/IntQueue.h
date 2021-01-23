#ifndef __IntQueue
#define __IntQueue
typedef struct {
	int max;
	int num;
	int front;
	int rear;
	int *que;
}IntQueue;

int Initialize(IntQueue *q, int max);
int Enqueue(IntQueue *q, int x);
int Dequeue(IntQueue *s, int *x);
int Peek(const IntQueue *s, int *x);
void Clear(IntQueue *s);
int Capacity(const IntQueue *s);
int Size(const IntQueue *s);
int IsEmpty(const IntQueue *s);
int IsFull(const IntQueue *s);
int Search(const IntQueue *s, int x);
void Print(const IntQueue *s);
void Terminate(IntQueue *s);

#endif
