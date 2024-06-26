#include "library.h"

#include <cstdio>

#include <libcpp20/src/old_interface.h>

void print_hello_world() {
    printf("hello, world\n");
    old_way_bark();
    async_way_bark();
    module_way_bark();
}
