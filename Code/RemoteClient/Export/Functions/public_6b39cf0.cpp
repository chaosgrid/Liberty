#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b39cf0, internal_6b39cf0, public_6b39cf0);
extern "C" NAKED register_t __cdecl internal_6b39cf0()
{
    __asm
    {
        mov eax, 1
        ret 
        UNREACHABLE_TRAP(0x6b39cf0)
    }
}
