#include "Alchemy-PCH.h"

PROC_DECLARE(0x620e600, internal_620e600, public_620e600);
extern "C" NAKED register_t __cdecl internal_620e600()
{
    __asm
    {
        mov eax, 0xFFFFFFF9
        ret 8
        UNREACHABLE_TRAP(0x620e600)
    }
}
