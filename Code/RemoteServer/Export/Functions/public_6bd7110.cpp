#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd7110, internal_6bd7110, public_6bd7110);
extern "C" NAKED register_t __cdecl internal_6bd7110()
{
    __asm
    {
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6bd7110)
    }
}
