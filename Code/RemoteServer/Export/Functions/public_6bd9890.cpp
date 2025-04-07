#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd9890, internal_6bd9890, public_6bd9890);
extern "C" NAKED register_t __cdecl internal_6bd9890()
{
    __asm
    {
        mov eax, offset public_6c13a0c
        ret 
        UNREACHABLE_TRAP(0x6bd9890)
    }
}
