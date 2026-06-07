#ifndef MutantStack_HPP
# define MutantStack_HPP

# include <iostream>
# include <string>
# include <exception>
# include <stack>
# include <iterator>
# include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
  public:
    MutantStack();
    MutantStack(const MutantStack& other);
    ~MutantStack();
    MutantStack& operator=(const MutantStack& other);

    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin();
    iterator end();

    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    const_iterator begin() const;
    const_iterator end() const;
};

#include "MutantStack.tpp"

#endif
