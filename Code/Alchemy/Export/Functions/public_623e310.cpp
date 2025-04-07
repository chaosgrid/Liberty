#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623e310);

PROC_DECLARE(0x623e310, internal_623e310, public_623e310);
extern "C" NAKED register_t __cdecl internal_623e310()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov cl, byte ptr ds : [eax+0x98]
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 8
        UNREACHABLE_TRAP(0x623e310)
    }
}
