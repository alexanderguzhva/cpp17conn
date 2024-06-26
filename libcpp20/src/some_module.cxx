// global module fragment where #includes can happen
module;
#include <iostream>

// first thing after the global module fragment must be a module command. 
export module some_module;

export class SomeClass {
public:
    SomeClass();
    ~SomeClass();
    void helloworld() const;
};

SomeClass::SomeClass() {
    std::cout << "SomeClass ctr\n";
}

SomeClass::~SomeClass() {
    std::cout << "SomeClass dtr\n";
}

void SomeClass::helloworld() const {
    std::cout << "hello, world from SomeClass!\n";
}

export void say_helloworld(const SomeClass& someclass) {
    someclass.helloworld();
}

export namespace bar {
    void say_helloworld(const SomeClass& someclass) {
        someclass.helloworld();
    }
}

export template<typename T>
concept Addable = requires(T a, T b) { a + b; };
