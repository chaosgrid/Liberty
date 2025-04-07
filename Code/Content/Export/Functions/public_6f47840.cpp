#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f47840);

PROC_DECLARE(0x6f47840, internal_6f47840, public_6f47840);
extern "C" NAKED register_t __cdecl internal_6f47840()
{
    __asm
    {
        fld qword ptr ds : [ecx+0x178]
        ret 
        UNREACHABLE_TRAP(0x6f47840)
    }
}
