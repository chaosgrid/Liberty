#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b39e00, internal_6b39e00, public_6b39e00);
extern "C" NAKED register_t __cdecl internal_6b39e00()
{
    __asm
    {
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6b39e00)
    }
}
