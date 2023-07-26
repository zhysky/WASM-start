// #include <stdio.h>
// #include <emscripten/emscripten.h>

// extern "C"
// {
//   EMSCRIPTEN_KEEPALIVE
//   int main(int argc, char **argv)
//   {
//     printf("Hello World\n");
//     return 0;
//   }

//   EMSCRIPTEN_KEEPALIVE
//   int myFunction(int argc, char **argv)
//   {
//     printf("我的函数已被调用\n");
//     return 999;
//   }
// }
#include <stdio.h>
#include <emscripten/emscripten.h>

int main(int argc, char **argv)
{
  printf("Hello World\n");
  return 0;
}

#ifdef __cplusplus
extern "C"
{
#endif

  int EMSCRIPTEN_KEEPALIVE myFunction()
  {
    printf("我的函数已被调用\n");
    return 999;
  }

#ifdef __cplusplus
}
#endif