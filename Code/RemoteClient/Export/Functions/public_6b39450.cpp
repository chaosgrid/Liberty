#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b39450, internal_6b39450, public_6b39450);
extern "C" NAKED register_t __cdecl internal_6b39450()
{
    __asm
    {
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6b39450)
    }
}
