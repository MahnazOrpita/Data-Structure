#include <iostream>
using namespace std;

struct Node
 {
	int value;
	struct Node* next;
	Node(int x)
	{
		value = x;
		next = NULL;
	}
};

struct Sort
 {
	Node* firstnode;
	Node* sorted;

	void push(int val)
	{

		Node* n = new Node(val);
        n->next = firstnode;

		firstnode = n;
	}


	void insertionSort(Node* k)
	{

		sorted = NULL;
		Node* current =k;

		while (current != NULL)
        {
            Node* next = current->next;
			sortedInsert(current);
			current = next;
		}

		firstnode= sorted;
	}


	void sortedInsert(Node* d)
	{

		if (sorted == NULL || sorted->value >= d->value) {
			d->next = sorted;
			sorted = d;
		}
		else {
			Node* current = sorted;

			while (current->next != NULL && current->next->value < d->value)
            {
				current = current->next;
			}
			d->next = current->next;
			current->next = d;
		}
	}

	void printlist(Node* head)
	{
		while (head != NULL) {
			cout << head->value << " ";
			head = head->next;
		}
	}
};

int main()
{
	Sort obj;
	obj.firstnode = NULL;
	obj.push(1);
	obj.push(2);
	obj.push(4);
	obj.push(3);
	obj.push(6);
    obj.push(5);
    obj.push(10);
	obj.push(9);
	obj.push(7);
    obj.push(8);
	cout << "Linked List before sorting :" << endl;
	obj.printlist(obj.firstnode);
	cout << endl;
	obj.insertionSort(obj.firstnode);
	cout << "Linked List After sorting :" << endl;
	obj.printlist(obj.firstnode);
}

