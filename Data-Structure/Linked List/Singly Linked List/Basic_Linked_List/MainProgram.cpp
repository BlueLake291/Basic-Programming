#include "stdafx.h"
#include "LinkedList.h"

int main()
{
	int a[] = { 1, 3, 5, 7, 8, 7, 5, 3, 1 };
	int size = sizeof(a) / sizeof(int);
	CLinkedList lkist;
	node* loopedNode = nullptr;

	for (int i = 0; i < size; ++i)
	{
		node* tmp = lkist.makeNode(a[i]);

		lkist.insertTail(tmp);
	}


	bool isPalindrome = lkist.isPalindrome();
	if (isPalindrome)
	{
		cout << "The array is palindrome.\n";
	}
	else
	{
		cout << "The array is not palindrome.\n";
	}
	
	cout << "The list is: \n";
	lkist.printList();

	system("pause");
	return 0;
}

