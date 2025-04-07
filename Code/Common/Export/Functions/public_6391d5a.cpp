#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da8);

PROC_DECLARE(0x6391d5a, internal_6391d5a, public_6391d5a);
extern "C" NAKED register_t __cdecl internal_6391d5a()
{
    __asm
    {
        push dword ptr ss : [esp+4]
        call public_6391da8
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6391d5a)
    }
}
