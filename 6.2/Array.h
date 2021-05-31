#pragma once
#include <iostream>
using namespace std;
class Array
{
public:
	//типи
	typedef unsigned int UINT;
	typedef double value_type;
	typedef double* iterator;
	typedef const double* const_iterator;
	typedef double& reference;
	typedef const double& const_reference;
	typedef std::size_t size_type;
private:
	static const size_type minsize = 10; // мінімальний розмір масиву
	size_type Size; // виділено пам’яті для елементів
	size_type Count; // кількість елементів в масиві
	size_type First; // значення індексу першого елемента в масиві
	value_type* elems; // вказівник на дані
public:
	// конструктори/копіювання/деструктор
	Array(const size_type& n = minsize)
		throw(bad_alloc, invalid_argument);
	Array(const Array&) throw(bad_alloc);
	Array(const iterator first, const iterator last)
		throw(bad_alloc, invalid_argument);
	Array(const size_type first, const size_type last)
		throw(bad_alloc, invalid_argument);
	~Array();
	Array& operator=(const Array&);
	friend Array operator + (Array& x, Array& y);
	friend Array operator * (Array& x, Array& y);
	friend Array operator - (Array& x, Array& y);
	// ітератори
	iterator begin() { return elems; }
	const_iterator begin() const { return elems; }
	iterator end() { return elems + Count; }
	const_iterator end() const { return elems + Count; }
	// розміри
	size_type size() const;
	bool empty() const;
	size_type capacity() const;
	void resize(size_type newsize)
		throw(bad_alloc);
	// доступ до елементів
	reference operator[](size_type) throw(out_of_range);
	const_reference operator[](size_type) const throw(out_of_range);
	reference front() { return elems[0]; }
	const_reference front() const { return elems[0]; }
	reference back() { return elems[size() - 1]; }
	const_reference back() const { return elems[size() - 1]; }
	// методи-модифікатори
	void push_back(const value_type& v);
	value_type pop_back() throw (logic_error);
	void clear() { Count = 0; }
	void swap(Array& other);
	void assign(const value_type& v);
	// дружні функції вводу/виводу
	friend ostream& operator <<(ostream& out, const Array& a);
	friend istream& operator >>(istream& in, Array& a);
	value_type sum();
	value_type am_abs() throw(logic_error);
	void add();
};


