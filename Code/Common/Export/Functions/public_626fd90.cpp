#include "Common-PCH.h"

PROC_DECLARE(0x626fd90, internal_626fd90, public_626fd90);
extern "C" NAKED register_t __cdecl internal_626fd90()
{
    __asm
    {
        mov eax, 4
        ret 
        UNREACHABLE_TRAP(0x626fd90)
    }
}
