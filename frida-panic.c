#include <assert.h>

#include <CoreFoundation/CoreFoundation.h>
#include <IOKit/IOKitLib.h>

#include <frida-gum.h>

kern_return_t my_IOServiceGetMatchingServices(mach_port_t mainPort, CFDictionaryRef matching,
                                              io_iterator_t *existing) {
    assert(existing);
    *existing = 0x0BAADC0D;
    printf("IOServiceGetMatchingServices(mainPort: 0x%08x, matching: %p, existing: %p) = "
           "*existing: 0x%08x\n",
           mainPort, matching, existing, *existing);
    return KERN_SUCCESS;
}

int main(void) {
    gum_init_embedded();
    GumInterceptor *interceptor = gum_interceptor_obtain();
    assert(interceptor);
    gum_interceptor_begin_transaction(interceptor);

    assert(!gum_interceptor_replace(interceptor, IOServiceGetMatchingServices,
                                    my_IOServiceGetMatchingServices, NULL, NULL));
    // assert(!gum_interceptor_replace(interceptor, IOServiceOpen, my_IOServiceOpen, NULL, NULL));
    // assert(
    //     !gum_interceptor_replace(interceptor, IOServiceMatching, my_IOServiceMatching, NULL, NULL));
    // assert(!gum_interceptor_replace(interceptor, IOObjectRelease, my_IOObjectRelease, NULL, NULL));
    // assert(!gum_interceptor_replace(interceptor, IOMasterPort, my_IOMasterPort, NULL, NULL));
    // assert(!gum_interceptor_replace(interceptor, IOIteratorNext, my_IOIteratorNext, NULL, NULL));
    // assert(!gum_interceptor_replace(interceptor, IOConnectCallMethod, my_IOConnectCallMethod, NULL,
    //                                 NULL));
    // assert(!gum_interceptor_replace(interceptor, fopen, my_fopen, NULL, (gpointer *)&orig_fopen));

    gum_interceptor_end_transaction(interceptor);

    return 0;
}
