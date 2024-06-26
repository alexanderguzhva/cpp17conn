import some_module;

#include "old_interface.h"

#include <cstdio>
#include <string>

#include <libcpp20/thirdparty/cppcoro/include/cppcoro/async_generator.hpp>
#include <libcpp20/thirdparty/cppcoro/include/cppcoro/sync_wait.hpp>
#include <libcpp20/thirdparty/cppcoro/include/cppcoro/task.hpp>

////////////////////////////////////////////////////////////////////////////
void old_way_bark() {
    printf("bark\n");
}

///////////////////////////////////////////////////////////////////////////
// an example from cppcoro
cppcoro::async_generator<std::string> bark_generator() {
    co_yield "async ";
    co_yield "bark";
}

void async_way_bark() {
    auto barkTask = []() -> cppcoro::task<>
    {
        auto barker = bark_generator();
        for (auto itr = co_await barker.begin(); itr != barker.end(); co_await ++itr) {
            printf("%s", (*itr).c_str());
        }
        printf("\n");
    };

    auto task = barkTask();

    // start the lazy task and wait until it completes
    cppcoro::sync_wait(task); // -> "async bark"
}

/////////////////////////////////////////////////////////////////////////
// modules
void module_way_bark() {
    SomeClass s;
    bar::say_helloworld(s);
}