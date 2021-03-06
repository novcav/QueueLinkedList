// 
// This is a program to implement singly linked list queue.
//

#include "stdafx.h"
#include "queue.h"

int main()
{
	int val;
	CQueue que;
	
	printf("Queue a First-In-First-Out (FIFO) data structure.\n\n");
	printf("In a FIFO data structure, the first element added to the queue\n");
	printf("will be the first one to be removed as shown in the example.\n\n");

	printf("Items are added to queue in an order as follow:\n\n");

	for (val = 0; val < 10; ++val)
	{
		printf("Item No. %d\n", val);
		que.Add(val);
	}
	
	printf("\nThen, items are removed from queue.\n\n");

	while(!que.IsEmpty())
	{
		que.Remove(&val);
		printf("Item No. %d\n", val);

	}


	printf("\nPress any key to exit.\n");
	getchar();

    return 0;
}

