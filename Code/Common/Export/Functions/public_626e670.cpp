#include "Common-PCH.h"

PROC_DECLARE(0x626e670, internal_626e670, public_626e670);
extern "C" NAKED register_t __cdecl internal_626e670()
{
    __asm
    {
        mov eax, 0xF
        ret 
        UNREACHABLE_TRAP(0x626e670)
    }
}
