#include "MutantStack.hpp"

int main(void)
{
  std::cout << "############### TEST: MutantStack {5, 17} ###############" << std::endl;
  MutantStack<int> mstack;
  mstack.push(5);
  mstack.push(17);
  std::cout << "Top element: " << mstack.top() << std::endl;
  std::cout << "popping element..." << std::endl;
  mstack.pop();
  std::cout << "Size: " << mstack.size() << std::endl;
  std::cout << "pushing elements... {3, 5, 737, 0}" << std::endl;
  mstack.push(3);
  mstack.push(5);
  mstack.push(737);
  mstack.push(0);
  MutantStack<int>::iterator it = mstack.begin();
  MutantStack<int>::iterator ite = mstack.end();
  ++it;
  --it;
  while (it != ite)
  {
    std::cout << *it << std::endl;
    ++it;
  }
  std::stack<int> s(mstack);

  std::cout << "############### TEST: std::list {5, 17} ###############" << std::endl;
  std::list<int> lst;
  lst.push_back(5);
  lst.push_back(17);
  std::cout << "Back element: " << lst.back() << std::endl;
  std::cout << "popping element..." << std::endl;
  lst.pop_back();
  std::cout << "Size: " << lst.size() << std::endl;
  std::cout << "pushing elements... {3, 5, 737, 0}" << std::endl;
  lst.push_back(3);
  lst.push_back(5);
  lst.push_back(737);
  lst.push_back(0);
  std::list<int>::iterator it_lst = lst.begin();
  std::list<int>::iterator ite_lst = lst.end();
  ++it_lst;
  --it_lst;
  while (it_lst != ite_lst)
  {
    std::cout << *it_lst << std::endl;
    ++it_lst;
  }

  return (0);
}
