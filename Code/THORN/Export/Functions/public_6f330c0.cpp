#include "THORN-PCH.h"

PROC_DECLARE(0x6f330c0, internal_6f330c0, public_6f330c0);
extern "C" NAKED register_t __cdecl internal_6f330c0()
{
    __asm
    {
        mov eax, offset public_6f5fc10
        ret 
        UNREACHABLE_TRAP(0x6f330c0)
    }
}
