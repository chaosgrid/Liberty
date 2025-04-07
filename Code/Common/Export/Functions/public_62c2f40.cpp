#include "Common-PCH.h"

PROC_DECLARE(0x62c2f40, internal_62c2f40, public_62c2f40);
extern "C" NAKED register_t __cdecl internal_62c2f40()
{
    __asm
    {
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x62c2f40)
    }
}
