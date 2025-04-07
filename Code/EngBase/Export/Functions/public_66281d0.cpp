#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66281d0);
CLANG_FORWARD_PROC_SYMBOL(public_6628220);

PROC_DECLARE(0x66281d0, internal_66281d0, public_66281d0);
extern "C" NAKED register_t __cdecl internal_66281d0()
{
    __asm
    {
        push dword ptr ss : [esp+4]
        call public_6628220
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x66281d0)
    }
}
