// Queue a First-In-First-Out (FIFO) data structure. 
//  In a FIFO data structure, the first element added to the queue will be the first one to be removed

#include "stdafx.h"
#include "queue.h"

// constructor
CQueue::CQueue()
{
	First = Last = NULL;
	Count = 0;
}

// destructor
CQueue::~CQueue()
{
	RemoveAll();
}

// determine if queue is empty
bool CQueue::IsEmpty()
{
	return (First == NULL);
}

// add node to the end of the queue
//
//           First                  Last                      Node
//           +----+     +----+     +----+                    +----+
//           |    |---->|    |---->|    |---->NULL           |    |----> NULL
//           +----+     +----+     +----+                    +----+
//
void CQueue::Add(int val)
{
	QUEUE *Node;

	Node = new QUEUE;

	Node->val = val;
	Node->Next = NULL;

	if(IsEmpty())
	{
		First = Last = Node;
	}
	else
	{
		Last->Next = Node;
		Last       = Node;
	}

	Count++;
}

// remove the first node of the queue
//
//           First                                  Last
//           +----+          +----+     +----+     +----+
//           |    |---->     |    |---->|    |---->|    |----> NULL
//           +----+          +----+     +----+     +----+
//
void CQueue::Remove(int *val)
{
	QUEUE* Node;

	Node = First;
	First = First->Next;

	*val = Node->val;

	delete Node;
	Count--;

	if (IsEmpty()) Last = First;
}

// remove all nodes
void CQueue::RemoveAll()
{
	int val;

	while(!IsEmpty()) Remove(&val);
}

// return total node of the queue
int CQueue::GetCount()
{
	return Count;
}
