#include "Alchemy-PCH.h"

PROC_DECLARE(0x6217aa0, internal_6217aa0, public_6217aa0);
extern "C" NAKED register_t __cdecl internal_6217aa0()
{
    __asm
    {
        mov eax, 0xFFFFFFF9
        ret 4
        UNREACHABLE_TRAP(0x6217aa0)
    }
}
