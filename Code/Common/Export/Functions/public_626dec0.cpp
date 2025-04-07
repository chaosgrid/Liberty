#include "Common-PCH.h"

PROC_DECLARE(0x626dec0, internal_626dec0, public_626dec0);
extern "C" NAKED register_t __cdecl internal_626dec0()
{
    __asm
    {
        mov eax, 9
        ret 
        UNREACHABLE_TRAP(0x626dec0)
    }
}
