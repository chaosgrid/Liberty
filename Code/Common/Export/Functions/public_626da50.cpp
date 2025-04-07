#include "Common-PCH.h"

PROC_DECLARE(0x626da50, internal_626da50, public_626da50);
extern "C" NAKED register_t __cdecl internal_626da50()
{
    __asm
    {
        mov eax, 0x1D
        ret 
        UNREACHABLE_TRAP(0x626da50)
    }
}
