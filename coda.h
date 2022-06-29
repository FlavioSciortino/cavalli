#ifndef CODA_H
#define CODA_H
template<typename T>
class coda {
int size = 0;
int max_size = 0;
int head = -1;
int tail = -1;
T * array;
public:
	coda(int max_size) : max_size(max_size) {
		array = new T[max_size];
	}

	void enqueue(T val) {
		if(size == max_size)
			return;
		if(head == -1)
			head = 0;
		tail = (++tail % max_size);
		array[tail] = val;
		size++;
		return;
	}

	T dequeue() {
		if(size == 0)
			return ;
		head = (++head % max_size);
		T tmp = array[head];
		size--;
		return tmp;
	}
	friend ostream &operator<<(ostream &os, coda<T> & c) {
		if(c.size == 0)
			return os << "empty " << endl;
		for(int i = c.head, count = 0; count < c.size; count++) {
			os << *c.array[i] << endl;
			i = i+1 % c.max_size;
		}
		return os;
	}
};
#endif

