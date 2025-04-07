#include "THORN-PCH.h"

PROC_DECLARE(0x6f331a0, internal_6f331a0, public_6f331a0);
extern "C" NAKED register_t __cdecl internal_6f331a0()
{
    __asm
    {
        mov eax, offset public_6f5fa28
        ret 
        UNREACHABLE_TRAP(0x6f331a0)
    }
}
