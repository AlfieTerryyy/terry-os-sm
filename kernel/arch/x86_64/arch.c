#include "arch.h"

void init_architecture(void) {
    init_cpu();
    init_interrupts();
    init_paging();
    init_timer();
}
