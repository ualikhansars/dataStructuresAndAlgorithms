#include <iostream>
#include <vector>
#include "Stack.h"

template <typename T>
bool Stack<T>::stackEmpty() {
	if (top < 0) {
		return true;
	}
	else {
		return false;
	}
}

template <typename T>
void Stack<T>::push(const T& value)
{
	if (elements.size() > MAX_SIZE) {
		std::cout << "Stack overflow" << std::endl;
	}
	else {
		top = top + 1;
		elements[top] = value;
	}
}
template <typename T>
T* Stack<T>::pop() {
	if (stackEmpty()) {
		std::cout << "Stack underflow" << std::endl;
	}
	else {
		top = top - 1;
		return &elements[++top];
	}
}