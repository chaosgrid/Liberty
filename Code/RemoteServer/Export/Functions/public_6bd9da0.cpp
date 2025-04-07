#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd9da0, internal_6bd9da0, public_6bd9da0);
extern "C" NAKED register_t __cdecl internal_6bd9da0()
{
    __asm
    {
        xor al, al
        ret 4
        UNREACHABLE_TRAP(0x6bd9da0)
    }
}
