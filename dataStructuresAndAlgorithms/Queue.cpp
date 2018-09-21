#include <vector>

class Queue {
	std::vector<int> elements;
	short head = 0;
	short tail = 0;
	const short MAX_SIZE = 1000;

public:
	void Enqueue(int newElement) {
		elements[tail] = newElement;
		if (tail == MAX_SIZE) {
			tail = 0;
		}
		else {
			tail += 1;
		}
	}

	int Dequeue() {
		int element = elements[head];
		if (head == MAX_SIZE) {
			head = 0;
		}
		else {
			head += 1;
		}
		return element;
	}
};