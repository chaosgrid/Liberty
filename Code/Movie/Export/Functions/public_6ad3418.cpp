#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad3429);

PROC_DECLARE(0x6ad3418, internal_6ad3418, public_6ad3418);
extern "C" NAKED register_t __cdecl internal_6ad3418()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        and eax, 0x7FF00000
        cmp eax, 0x7FF00000
        je public_6ad3429
        ret 
        UNREACHABLE_TRAP(0x6ad3418)
    }
}
