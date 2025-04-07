#include "Alchemy-PCH.h"

PROC_DECLARE(0x6233fa0, internal_6233fa0, public_6233fa0);
extern "C" NAKED register_t __cdecl internal_6233fa0()
{
    __asm
    {
        mov eax, 0xFFFFFFF9
        ret 4
        UNREACHABLE_TRAP(0x6233fa0)
    }
}
