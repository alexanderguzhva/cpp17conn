Some tests with C++20, async and modules.
The solution that consists of 1 c++17 executable, 1 c++17 library and 1 c++20 library. The goal is to check whether c++20 library can be connected to c++17 executable. Additionally, I've been testing some C++20 features.

I was able to run it using `clang-18` (don't forget to install `clang-tools-18` and `ninja-build` on Ubuntu). Maybe, there will be complaints on `19'20'0000` in `cppcoro`, change it to `19200000`.

`gcc-13` is insufficient for modules (certain facilities are missing that are required for `cmake`).

`gcc-14` fails to compile because of some problems. Please feel free to take a look, maybe I've missed something in the code.

Without modules, even `gcc-11` is sufficient.

I've used CMake 3.29.6.

The project can be debugged in VSCode.

