#if defined(__EMSCRIPTEN__)
#include <stdio.h>
#include <emscripten/emscripten.h>
#else
#include <stdio.h>
#endif

int main(int argc, char **argv)
{
    const char *hello = "Hello World\n";
    printf("%s\n", hello);
    return 0;
}

#ifdef __cplusplus
extern "C"
{
#endif

#if defined(__EMSCRIPTEN__)
    int EMSCRIPTEN_KEEPALIVE myFunction()
    {
        printf("我的函数已被调用\n");
        return 999;
    }
#endif

#ifdef __cplusplus
}
#endif