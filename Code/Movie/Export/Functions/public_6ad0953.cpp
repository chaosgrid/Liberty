#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad0953);
CLANG_FORWARD_PROC_SYMBOL(public_6ad0965);

PROC_DECLARE(0x6ad0953, internal_6ad0953, public_6ad0953);
extern "C" NAKED register_t __cdecl internal_6ad0953()
{
    __asm
    {
        push dword ptr ds : [public_6ae108c]
        push dword ptr ss : [esp+8]
        call public_6ad0965
        pop ecx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ad0953)
    }
}
