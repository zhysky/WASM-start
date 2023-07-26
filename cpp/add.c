#include <emscripten.h>

int main() {}

EMSCRIPTEN_KEEPALIVE
int add(int x, int y)
{
  return x + y;
}