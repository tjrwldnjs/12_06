#include <stdio.h>
#include <stdlib.h> 
typedef struct linknd {
	
	int data;
	void *next;
	//struct linknd *next;
} linknd_t;

//struct linknd nd; �̰Ŵ� ���߿� �����ϴϱ�(typedef �Ⱦ���) 
//linknd_t nd; typedef���� �̷���. �����ϰ�. (�Ʒ�����) 

static linknd_t *list; //linked list ��ü , static�� �����Ҵ� - �ٸ� ���Ͽ��� ���� ���ϵ���. 

linknd_t* create_node(int value ){
	
	linknd_t* ndPtr;
	
	// ���� �޸� �Ҵ�
	ndPtr = (linknd_t*)malloc( sizeof(linknd_t) );
	if (ndPtr == NULL)
	{
		printf("ERROR\n");
		return NULL;
	}
	
	//������ ����
	ndPtr->data = value;
	ndPtr->next = NULL; //liked list�� ��� �ʱ�ȭ. 
	 
	 return ndPtr;  
	 
} 

void addTail(int value){
	
	linknd_t *ndPtr, *newPtr;
	
	if (list == NULL)
	{
		return;
	}
	else
	{
		ndPtr = list;
		while (ndPtr->next != NULL )
			{
				ndPtr = ndPtr->next;
			}
	}
	
	newPtr = create_node(value);
	ndPtr->next = newPtr; //���� ���� ��带 ����Ű�� �Ѵ�. 
	
}
