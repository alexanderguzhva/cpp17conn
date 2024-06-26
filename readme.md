Some tests with C++20, async and modules.
The solution that consists of 1 c++17 executable, 1 c++17 library and 1 c++20 library. The goal is to check whether c++20 library can be connected to c++17 executable. Additionally, I'm testing some C++20 features.

I was able to run it using `clang-18` (don't forget to install `clang-tools-18` and `ninja-build` on Ubuntu). 

'gcc-13' is insufficient for modules.

'gcc-14' fails to compile because of some problems. Please feel free to take a look.

Without modules, even 'gcc-11' is sufficient.

I've used CMake 3.29.6.

The project can be debugged in VSCode.

