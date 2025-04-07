#include "Alchemy-PCH.h"

PROC_DECLARE(0x620e630, internal_620e630, public_620e630);
extern "C" NAKED register_t __cdecl internal_620e630()
{
    __asm
    {
        mov eax, 0xC8
        ret 4
        UNREACHABLE_TRAP(0x620e630)
    }
}
