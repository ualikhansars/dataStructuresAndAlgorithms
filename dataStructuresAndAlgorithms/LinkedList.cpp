#include "LinkedList.h"

LinkedList::LinkedList()
{
	head = nullptr;
	tail = nullptr;	
}

LinkedListNode LinkedList::getHead() const
{
	return *head;
}

LinkedListNode LinkedList::getTail() const
{
	return *tail;
}

LinkedListNode LinkedList::search(int value) const
{
	LinkedListNode currentElement = *head;
	while (&currentElement != nullptr || currentElement.key != value) {
		currentElement = *currentElement.next;
	}
	return currentElement;
}

void LinkedList::insertFront(int value)
{
	LinkedListNode newElement;
	newElement.key = value;
	newElement.next = head;
	newElement.prev = nullptr;
	if (head != nullptr) {
		head->prev = &newElement;
	}
	head = &newElement;
}

void LinkedList::insertBack(int value)
{
	LinkedListNode newElement;
	newElement.key = value;
	newElement.next = nullptr;
	newElement.prev = tail;
	if (tail != nullptr) {
		tail->next = &newElement;
	}
	tail = &newElement;
}

void LinkedList::remove(int value)
{
	LinkedListNode foundElement = search(value);
	if (&foundElement != nullptr) {
		if (foundElement.prev != nullptr) {
			foundElement.prev->next = foundElement.next;
		}
		if (foundElement.next != nullptr) {
			foundElement.next->prev = foundElement.prev;
		}
	}
}
