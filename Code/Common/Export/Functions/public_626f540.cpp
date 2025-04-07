#include "Common-PCH.h"

PROC_DECLARE(0x626f540, internal_626f540, public_626f540);
extern "C" NAKED register_t __cdecl internal_626f540()
{
    __asm
    {
        mov eax, 0x20
        ret 
        UNREACHABLE_TRAP(0x626f540)
    }
}
