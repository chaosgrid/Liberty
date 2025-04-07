#include "Common-PCH.h"

PROC_DECLARE(0x626db50, internal_626db50, public_626db50);
extern "C" NAKED register_t __cdecl internal_626db50()
{
    __asm
    {
        mov eax, 0xC
        ret 
        UNREACHABLE_TRAP(0x626db50)
    }
}
