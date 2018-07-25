#include "stdafx.h"
#include "CircularLinkedList.h"



int main()
{
	CCircularLinkedList lkist;

	int a[] = { 1, 5, 8, 7, 9, 6, 8 };
	int size = sizeof(a) / sizeof(int);

	// input for circular linked list. 
	for (int i = 0; i < size; ++i)
	{
		CNode* pNode = lkist.makeNode(a[i]);
		lkist.insertTail(pNode);
	}

	/*cout << "Before adding element, list have: \n";
	lkist.printList();

	CNode* pNewNode = lkist.makeNode(20);
	lkist.insertBegin(pNewNode);*/

	/*CNode* pNewNode = lkist.makeNode(10);
	lkist.insertBefore(pNewNode, 9);
	cout << "After adding element, list have: \n";*/
	lkist.printList();

	lkist.deleteNodeAt(8);
	lkist.deleteNodeAt(8);

	lkist.printList();

	system("pause");
	return 0;
}