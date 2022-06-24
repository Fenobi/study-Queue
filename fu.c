#define _CRT_SECURE_NO_WARNINGS

#include "Queue.h"



void test1()
{
	Queue q;
	QueueInit(&q);

	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);
	printf("%d\n",QueueSize(&q));

	QueuePop(&q);
	QueuePop(&q);
	QueuePop(&q);

	printf("%d\n", QueueBack(&q));
	printf("%d\n", QueueFront(&q));


	//QueuePush(&q, 41);
	//QueuePush(&q, 42);

	printf("%d", QueueEmpty(&q));
//	QueuePrint(&q);

	QueueDestroy(&q);
}

void test2()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);

	while (!QueueEmpty(&q))
	{
		QDataType data = QueueFront(&q);
		printf("%d ", data);
		QueuePop(&q);
	}
	printf("\n");
	QueueDestroy(&q);

}

void test3()
{

}

int main()
{
	//test1();
	test2();
	//test3();
	return 0;
}