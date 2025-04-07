#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd7120, internal_6bd7120, public_6bd7120);
extern "C" NAKED register_t __cdecl internal_6bd7120()
{
    __asm
    {
        mov eax, offset public_6c13a00
        ret 
        UNREACHABLE_TRAP(0x6bd7120)
    }
}
