#include <stdio.h>
#include <stdlib.h> 
typedef struct linknd {
	
	int data;
	void *next;
	//struct linknd *next;
} linknd_t;

//struct linknd nd; 이거는 나중에 복잡하니까(typedef 안쓸때) 
//linknd_t nd; typedef쓰면 이렇게. 간단하게. (아래참고) 

static linknd_t *list; //linked list 실체 , static은 정적할당 - 다른 파일에서 접근 못하도록. 

linknd_t* create_node(int value ){
	
	linknd_t* ndPtr;
	
	// 동적 메모리 할당
	ndPtr = (linknd_t*)malloc( sizeof(linknd_t) );
	if (ndPtr == NULL)
	{
		printf("ERROR\n");
		return NULL;
	}
	
	//정수값 저장
	ndPtr->data = value;
	ndPtr->next = NULL; //liked list의 노드 초기화. 
	 
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
	ndPtr->next = newPtr; //새로 만든 노드를 가리키게 한다. 
	
}

void genList(void){ //실체생성 
	
	list = create_node(0);
	
	return;
}

void print_list(void){
	
	linknd_t *ndPtr;
	
	ndPtr = list->next;
	while(ndPtr != NULL)
	{
		printf("%i ", ndPtr->data);
		ndPtr = ndPtr->next;
	}
}



