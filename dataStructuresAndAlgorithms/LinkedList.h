#pragma once

struct LinkedListNode {
	int key;
	LinkedListNode* prev;
	LinkedListNode* next;
};

class LinkedList {
	LinkedListNode* head;
	LinkedListNode* tail;

public:
	LinkedList();
	
	LinkedListNode getHead() const;

	LinkedListNode getTail() const;

	LinkedListNode search(int value) const;

	void insertFront(int value);

	void insertBack(int value);

	void remove(int value);
};
