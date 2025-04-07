#include "Common-PCH.h"

PROC_DECLARE(0x626f1e0, internal_626f1e0, public_626f1e0);
extern "C" NAKED register_t __cdecl internal_626f1e0()
{
    __asm
    {
        mov eax, 0x1E
        ret 
        UNREACHABLE_TRAP(0x626f1e0)
    }
}
