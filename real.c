#include <stdio.h>
#include "real.h"
#include "service.h"

int add_and_double(int a, int b)
{
    // This should be the fake in our test.
    real_service_call();
    return ((a + b) * 2);
}