#include "real.h"
#include <stdio.h>
#include "fff/fff.h"

DEFINE_FFF_GLOBALS;

FAKE_VOID_FUNC(real_service_call);

void real_service_call_0(void)
{
    printf("Called fake service!\n");
}

int main()
{
    real_service_call_fake.custom_fake = real_service_call_0;

    printf("Call count to service: %d\n", real_service_call_fake.call_count);
    // Makes call to real_service_call.
    int res = add_and_double(1, 2);
    printf("Result: %d\n", res);
    printf("Call count to service: %d\n", real_service_call_fake.call_count);
    return 0;
}