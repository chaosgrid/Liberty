#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6224120);

PROC_DECLARE(0x6224120, internal_6224120, public_6224120);
extern "C" NAKED register_t __cdecl internal_6224120()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov cl, byte ptr ds : [eax+0x99]
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 8
        UNREACHABLE_TRAP(0x6224120)
    }
}
