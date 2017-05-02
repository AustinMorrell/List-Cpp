#include <iostream>
using namespace std;

template <typename T>
struct Node
{
public:
	Node* next;
	void setData(T);
	T getData();
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
T Node::getData()
{
	return data;
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
	Node Start = nullptr;
public:
	T at(int);
	void Add(T);
	void Remove(T);
};

template <typename T>
T List::at(int place)
{

}

template <typename T>
void List::Add(T data)
{
	if (Start == nullptr)
	{
		Start.setData(data);
	}
	else
	{
		// To Be Continued
	}
}

template <typename T>
void List::Remove(T)
{

}

int main()
{


	system("pause");
	return 0;
}