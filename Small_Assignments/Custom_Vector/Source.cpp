#include <iostream>

using namespace std;

template <class T>
class Vector
{
private:
	int _count = 0;
	int _capacity = 0;
	T* data = nullptr;

public:
	Vector()
	{
		_count = 0;
		set_capacity(8);

		data = new T[_capacity];
	}

	~Vector()
	{
		delete[] data;
	}

	T& operator[](int index)
	{
		if (index >= _count)
		{
			std::cout << "Index " << index << "out of bounds!\n";
			exit(1);
		}
		return data[index];
	}

	void push_back(T value)
	{
		if (_count >= _capacity)
		{
			set_capacity(_capacity + 8);
		}
		data[_count] = value;
		_count++;
	}

	T pop_back()
	{
		T temp = data[_count - 1];
		_count--;
		return temp;
	}

	void remove(T value)
	{
		int index = -1;
		for (int i = 0; i < _count; i++)
		{
			if (data[i] == value)
			{
				index = i;
			}
		}

		// Didn't find value in data
		if (index == -1)
		{
			return;
		}

		// Found value and shifting to left
		for (int i = index; i < _count; i++)
		{
			data[i - 1] = data[i];
		}
	}

	int size()
	{
		return _count;
	}

	// Debug funcs
	void print()
	{
		cout << "> PRINT" << endl;
		for (int i = 0; i < _count; i++)
		{
			cout << i << ": " << data[i] << endl;
		}
	}

	void log()
	{
		cout << "> LOG" << endl;
		cout << "Count: " << _count << endl;
		cout << "Capacity: " << _capacity << endl;
	}

private:
	void set_capacity(int capacity)
	{
		int* temp = data;
		data = new int[capacity];

		if (temp != nullptr)
		{
			memcpy(data, temp, _capacity * sizeof(T));
			_capacity = capacity;
			delete[] temp;
		}
	}
};
int main()
{
	Vector<int> vector;
	vector.push_back(1);
	vector.push_back(10);
	vector.push_back(5);
	vector.push_back(614);
	vector.push_back(14);
	vector.push_back(62);
	vector.push_back(76);
	vector.push_back(3);
	vector.push_back(9);
	vector.push_back(744);
	vector.push_back(135);

	vector.log();
	vector.print();

	int x = vector.pop_back();

	vector.log();
	vector.print();
	cout << x << endl;
}