#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	genList();
	
	addTail(10);
	addTail(20);
	addTail(30);
	addTail(40);
	addTail(50);
	
	print_node(3);
	
	return 0;
}
