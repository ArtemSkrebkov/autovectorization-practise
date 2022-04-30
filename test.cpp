#define Q(x) #x
#define QUOTE(x) Q(x)

#ifdef INCLUDE_TEST
#include QUOTE(INCLUDE_TEST)
#endif


int main() {
  testFunc test;
  test.run();
  return 0;
}
