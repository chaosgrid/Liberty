#include "Common-PCH.h"

PROC_DECLARE(0x626efd0, internal_626efd0, public_626efd0);
extern "C" NAKED register_t __cdecl internal_626efd0()
{
    __asm
    {
        mov eax, 0x13
        ret 
        UNREACHABLE_TRAP(0x626efd0)
    }
}
