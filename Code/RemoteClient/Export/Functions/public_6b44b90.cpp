#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b44b90, internal_6b44b90, public_6b44b90);
extern "C" NAKED register_t __cdecl internal_6b44b90()
{
    __asm
    {
        lea eax, ds:[ecx+0x28]
        ret 
        UNREACHABLE_TRAP(0x6b44b90)
    }
}
