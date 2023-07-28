cmake_minimum_required(VERSION 3.0.0)
project(wasm VERSION 0.1.0 LANGUAGES C CXX)
set(CMAKE_CXX_STANDARD 23)

file(REAL_PATH ./shell_html/shell.html var)
message("var:${var}")

if(EMSCRIPTEN)
	SET(WASM_FLAGS "-o ./out/main.html \
	  -O3 \
      -s WASM=1 \
      -s EXPORTED_RUNTIME_METHODS=\"['ccall']\" \
      --shell-file  ${var}")

	SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${WASM_FLAGS}")

	SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${WASM_FLAGS}")
endif()

add_executable(wasm main.cpp)