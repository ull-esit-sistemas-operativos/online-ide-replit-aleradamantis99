#include <iostream>
#include <thread>
int main()
{
  std::thread t1([] { std::cout << 1 << 2 << 3 << 4 << 5; });
  std::thread t2([] { std::cout << 3 << 4 << 5 << 6; });
  t1.join();
  t2.join();
  std::cout << "Hola\n";
  return 0;
}