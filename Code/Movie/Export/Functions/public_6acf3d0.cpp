#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf3d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ad07b3);

PROC_DECLARE(0x6acf3d0, internal_6acf3d0, public_6acf3d0);
extern "C" NAKED register_t __cdecl internal_6acf3d0()
{
    __asm
    {
        push dword ptr ss : [esp+4]
        call public_6ad07b3
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6acf3d0)
    }
}
