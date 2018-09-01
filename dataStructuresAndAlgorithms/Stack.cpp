#include <iostream>
#include <vector>

class Stack 
{
	short top = -1;
	const short MAX_SIZE = 1000;
public:
	std::vector<int> elements;
	
	bool stackEmpty();
	void push(int value);
	int pop();
};

bool Stack::stackEmpty() {
	if (top < 0) {
		return true;
	}
	else {
		return false;
	}
}

void Stack::push(int value)
{
	if (elements.size() > MAX_SIZE) {
		std::cout << "Stack overflow" << std::endl;
	}
	else {
		top = top + 1;
		elements[top] = value;
	}
}

int Stack::pop() {
	if (stackEmpty()) {
		std::cout << "Stack underflow" << std::endl;
	}
	else {
		top = top - 1;
		return elements[++top];
	}
}