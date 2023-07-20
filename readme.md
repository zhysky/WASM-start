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
emcc main.cpp
emcc main.cpp -s WASM=1 
emcc main.cpp -s WASM=1 -o main.wasm



emcc -o main.html main.cpp -O3 -s WASM=1 -s "EXPORTED_RUNTIME_METHODS=['ccall']" --shell-file "./shell_html/shell.html"

```
