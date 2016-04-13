
#ifndef ARRAY_HPP
#define ARRAY_HPP


template <typename T>

class Array {


private:
		unsigned int	_n;

public:
		Array(void) : _n(0), _array(NULL)
		{
			return ;
		}
		Array(unsigned int n) : _n(n)
		{
			this->_array = new T[this->_n];
			return ;
		}
		Array(Array const & src) : _n(0)
		{
			this->operator=(src);
		}
		~Array()
		{
			if (this->_array)
				delete this->_array;
		}

		unsigned int	size(void) const
		{
			return (this->_n);
		}

		Array<T>& operator=(Array<T> const & shr)
		{
			if (&shr == this)
				return (*this);
			if (this->_n > 0 && this->_array)
				delete [] this->_array;
			this->_array = new T[shr.size()];
			for (unsigned int i = 0; i < shr.size(); i++)
			{
				this->_array[i] = shr._array[i];
			}
			this->_n = shr.size();
			return (*this);
		}
		T		&operator[](size_t n) const
		{
			if (this->_n == 0 || this->_n <= n)
				throw std::exception();
			else
				return (this->_array[n]);
		}

		T				*_array;
};

#endif