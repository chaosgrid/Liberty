#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b39460, internal_6b39460, public_6b39460);
extern "C" NAKED register_t __cdecl internal_6b39460()
{
    __asm
    {
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6b39460)
    }
}
