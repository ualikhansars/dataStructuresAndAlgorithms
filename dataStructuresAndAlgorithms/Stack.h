#pragma once

template <typename T>
class Stack 
{
	short top = -1;
	const short MAX_SIZE = 1000;
	std::vector<T> elements;
public:
	bool stackEmpty();
	void push(const T& value);
	T* pop();
};
