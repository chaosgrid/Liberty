#include "Server-PCH.h"

PROC_DECLARE(0x6d44770, internal_6d44770, public_6d44770);
extern "C" NAKED register_t __cdecl internal_6d44770()
{
    __asm
    {
        mov eax, offset public_6d8fad0
        ret 
        UNREACHABLE_TRAP(0x6d44770)
    }
}
