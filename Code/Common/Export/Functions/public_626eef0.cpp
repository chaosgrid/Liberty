#include "Common-PCH.h"

PROC_DECLARE(0x626eef0, internal_626eef0, public_626eef0);
extern "C" NAKED register_t __cdecl internal_626eef0()
{
    __asm
    {
        mov eax, 0x12
        ret 
        UNREACHABLE_TRAP(0x626eef0)
    }
}
