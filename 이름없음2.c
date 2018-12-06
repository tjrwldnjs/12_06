
typedef struct linknd {
	
	int data;
	void *next;
	//struct linknd *next;
} linknd_t;

//struct linknd nd; 이거는 나중에 복잡하니까(typedef 안쓸때) 
//linknd_t nd; typedef쓰면 이렇게. 간단하게. (아래참고) 

static linknd_t *list; //linked list 실체 , static은 정적할당 - 다른 파일에서 접근 못하도록. 

