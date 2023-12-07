#include <stdio.h>
#include <stdlib.h> 


struct Node { 
	int data; 
	struct Node* next; 
};

struct Node* head = NULL; 

void addNode(int value) { 
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = value; 
	newNode->next = head; 
	head = newNode;
}

void showList() { 
	struct Node* current = head; 
	printf("List:  "); 
	while(current != NULL) { 
	printf("%d ", current-> data); 
	current = current->next; 
	}

	
}

void editNode(int oldValue, int newValue) { 
	struct Node* current = head; 
	while (current!=NULL) { 
		if(current->data == oldValue) { 
			current->data = newValue; 
			return;
		}
		current = current->next; 
	}
	printf("Value %d not found in the list.\n", oldValue);
	
}

int main() { 
	int choice, value, oldValue, newValue;
	
	do { 
		printf("\nMENU:\n"); 
		printf("1. Add MENU\n");
		printf("2. Show MENU\n"); 
		printf("3. Edit MENU\n"); 
		printf("4. Exit\n"); 
		printf("Enter Number: "); 
		scanf("%d", &choice); 
		
		switch(choice){ 
			case 1: 
				printf("ADD: "); 
				scanf("%d", &value); 
				addNode(value); 
				break; 
			case 2: 
				showList(); 
				break; 
			case 3: 
				printf("EDIT: ");
				scanf("%d", &oldValue); 
				printf("Enter New Value: "); 
				scanf("%d", &newValue); 
				editNode(oldValue, newValue);
				break;
			case 4: 
				printf("Exit MENU\n"); 
				break; 
			default: 
				printf("Try Again"); 
				
		}
	
	}	while (choice!= 4);
			return 0;

}
