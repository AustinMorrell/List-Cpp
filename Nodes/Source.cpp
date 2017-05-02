#include <iostream>
using namespace std;

template <typename T>
struct Node
{
public:
	Node* next;
	void setData(T);
	void print();
private:
	T data;
};

template <typename T>
void Node::setData(T d)
{
	data = d;
}

template <typename T>
void Node::print()
{
	cout << data << endl;
}

template <typename T>
void Swap(Node& a, Node& b)
{
	Node Tmp = a;
	a = b;
	b = Tmp;
}

template <typename T>
struct List
{
private:
	Node Start;
public:
	T at(int);
	void Add(T);
};

template <typename T>
T List::at(int place)
{

}

template <typename T>
void List::Add(T data)
{

}

int main()
{
	Node node1;
	Node node2;
	Node node3;

	node1.setData(1);
	node2.setData(2);
	node3.setData(3);

	node1.next = &node2;
	node2.next = &node3;
	node3.next = nullptr;

	node1.print();
	node2.print();
	node3.print();

	cout << endl;
	Swap(node1, node2);

	node1.print();
	node2.print();
	node3.print();

	system("pause");
	return 0;
}