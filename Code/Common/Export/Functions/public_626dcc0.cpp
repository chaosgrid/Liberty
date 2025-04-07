#include "Common-PCH.h"

PROC_DECLARE(0x626dcc0, internal_626dcc0, public_626dcc0);
extern "C" NAKED register_t __cdecl internal_626dcc0()
{
    __asm
    {
        mov eax, 0x22
        ret 
        UNREACHABLE_TRAP(0x626dcc0)
    }
}
