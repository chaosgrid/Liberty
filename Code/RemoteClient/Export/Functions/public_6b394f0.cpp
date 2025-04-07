#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b394f0, internal_6b394f0, public_6b394f0);
extern "C" NAKED register_t __cdecl internal_6b394f0()
{
    __asm
    {
        mov eax, offset public_6b73b2c
        ret 
        UNREACHABLE_TRAP(0x6b394f0)
    }
}
