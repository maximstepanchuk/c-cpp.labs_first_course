#include <iostream>
#include<string>
using namespace std;
template <typename T>
class Queue
{
public:
	template <typename T>
	int head = nullptr;
	int last = nullptr;
	int size = 0;
	class Node
	{
		Data data;
		Node* pPrev;
		Node* pNext;
		Node(Data data) 
		{
			this->data = data;
			this->pPrev = nullptr;
			this->pNext = nullptr;
		}
		Node(Data data, Node next) {
			this->data = data;
			this->pPrev = nullptr;
			this->pNext = next;
		}
		Node(Data data, Node prev,  Node next) {
			this->data = data;
			this->pPrev = prev;
			this->pNext = next;
		}

	};

	void add(T t) {
		if (isEmpty()) {
			Node node = Node(t);
			this.head = node;
		}
		else {
			Node node = Node(t, this.head);
			this->last = node;
		}
	}



	bool isEmpty() 
	{
		if (this->head == nullptr)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};


class Data
{
public:
	int x;
	int y;


	Data(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
};
