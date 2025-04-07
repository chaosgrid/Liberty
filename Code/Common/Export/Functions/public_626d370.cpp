#include "Common-PCH.h"

PROC_DECLARE(0x626d370, internal_626d370, public_626d370);
extern "C" NAKED register_t __cdecl internal_626d370()
{
    __asm
    {
        mov eax, 0xA
        ret 
        UNREACHABLE_TRAP(0x626d370)
    }
}
