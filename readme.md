## 安装 emsdk

```bash
git clone https://github.com/emscripten-core/emsdk.git
cd emsdk
git pull
emsdk install latest
emsdk activate latest
emsdk_env.bat
```

## 使用

- 模板文件位置 C:\Users\YUKI\AppData\Local\emsdk\upstream\emscripten\src\shell_minimal.html
- 也可以自定义一个 html，要求 内容中有 {{{ SCRIPT }}}
- include 包含路径中添加 C:/Users/YUKI/AppData/Local/emsdk/upstream/emscripten/system/include

- 编译命令：

```bash
# em++
emcc ./cpp/main.cpp
emcc ./cpp/main.cpp -s WASM=1 
emcc ./cpp/main.cpp -O3 -s SIDE_MODULE=1 -o main.wasm
emcc -o ./out/main.html ./cpp/main.cpp -O3 -s WASM=1 -s "EXPORTED_RUNTIME_METHODS=['ccall']" --shell-file "./shell_html/shell.html"
# 以上命令生成wasm的同时还会生成胶水js

emcc ./cpp/main.cpp -s WASM=1 -o main.wasm
# 只生成wsam，但是不能手动fetch加载


#  如果要手动 await fetch('../main.wasm') ，需要用下面的命令来生成wasm文件
 emcc -O3 ./cpp/add.c -o add.wasm -s STANDALONE_WASM 

```


```cmake
cmake -B build && cmake --build build -j4
emcmake cmake -B build-web && cmake --build build-web -j4

```
