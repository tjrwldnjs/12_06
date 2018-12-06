
typedef struct linknd {
	
	int data;
	void *next;
	//struct linknd *next;
} linknd_t;


//struct linknd nd; 이거는 나중에 복잡하니까(typedef 안쓸때) 
linknd_t nd; //typedef쓰면 이렇게. 간단하게. 
