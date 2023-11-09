#pragma once

# include <iostream>
# include <cstring>
# include <stdexcept>

template <typename T>
class Array
{
private:
	unsigned int	_size;
	T				*_array;
public:
	Array() : _size(0), _array(0) {}

	Array(unsigned int n) : _size(n)
	{
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; ++i) {
			_array[i] = T();
		}
	}

	Array(const Array &copy) : _size(copy._size)
	{
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; ++i) {
			_array[i] = copy._array[i];
		}
	}

	Array& operator=(const Array &obj)
	{
		if (this != &obj) {
			delete[] _array;
			_size = obj._size;
			_array = new T[_size];
			for (unsigned int i = 0; i < _size; ++i) {
				_array[i] = obj._array[i];
			}
		}
		return (*this);
	}

	~Array()
	{
		delete[] _array;
	}

	T &operator [] (int i)
	{
		if (i < 0 || i >= static_cast<int>(_size))
			throw std::exception();
		return _array[i];
	}

	unsigned int	size(void) const {return _size;}
};
