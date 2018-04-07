// Queue a First-In-First-Out (FIFO) data structure. 
//  In a FIFO data structure, the first element added to the queue will be the first one to be removed

#pragma once

typedef struct QUEUE QUEUE;

struct QUEUE{
	int val;
	QUEUE *Next;
};

class CQueue
{
private:
	QUEUE *First, *Last;
	unsigned int Count;

public:
	CQueue();
	~CQueue();

	bool IsEmpty();
	void Add(int val);
	void Remove(int *val);
	void RemoveAll();

	int GetCount();
};

