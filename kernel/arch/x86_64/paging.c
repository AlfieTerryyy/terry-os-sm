#include "paging.h"

struct page_table_entry {
    unsigned long present : 1;
    unsigned long rw : 1;
    unsigned long user : 1;
    unsigned long reserved : 5;
    unsigned long frame : 20;
};

void init_paging(void) {

}
