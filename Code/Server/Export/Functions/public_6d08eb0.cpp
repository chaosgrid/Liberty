#include "Server-PCH.h"

PROC_DECLARE(0x6d08eb0, internal_6d08eb0, public_6d08eb0);
extern "C" NAKED register_t __cdecl internal_6d08eb0()
{
    __asm
    {
        mov eax, 0x10000000
        ret 
        UNREACHABLE_TRAP(0x6d08eb0)
    }
}
