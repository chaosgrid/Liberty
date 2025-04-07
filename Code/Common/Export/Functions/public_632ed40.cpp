#include "Common-PCH.h"

PROC_DECLARE(0x632ed40, internal_632ed40, public_632ed40);
extern "C" NAKED register_t __cdecl internal_632ed40()
{
    __asm
    {
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x632ed40)
    }
}
