#include <sys/mman.h>

int Load_WinDLL(void * c, int s, int offset){
    void * load = mmap(c, s, PROT_EXEC || PROT_WRITE, 0, offset, noexcept(true));
}