#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621dc60);

PROC_DECLARE(0x621dc60, internal_621dc60, public_621dc60);
extern "C" NAKED register_t __cdecl internal_621dc60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov cl, byte ptr ds : [eax+0x9A]
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 8
        UNREACHABLE_TRAP(0x621dc60)
    }
}
