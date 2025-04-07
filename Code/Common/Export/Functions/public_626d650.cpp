#include "Common-PCH.h"

PROC_DECLARE(0x626d650, internal_626d650, public_626d650);
extern "C" NAKED register_t __cdecl internal_626d650()
{
    __asm
    {
        mov eax, 0x15
        ret 
        UNREACHABLE_TRAP(0x626d650)
    }
}
