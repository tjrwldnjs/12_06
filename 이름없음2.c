
typedef struct linknd {
	
	int data;
	void *next;
	//struct linknd *next;
} linknd_t;

//struct linknd nd; �̰Ŵ� ���߿� �����ϴϱ�(typedef �Ⱦ���) 
//linknd_t nd; typedef���� �̷���. �����ϰ�. (�Ʒ�����) 

static linknd_t *list; //linked list ��ü , static�� �����Ҵ� - �ٸ� ���Ͽ��� ���� ���ϵ���. 

