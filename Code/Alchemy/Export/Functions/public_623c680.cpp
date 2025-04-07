#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623c680);

PROC_DECLARE(0x623c680, internal_623c680, public_623c680);
extern "C" NAKED register_t __cdecl internal_623c680()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov cl, byte ptr ds : [eax+0x9A]
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 8
        UNREACHABLE_TRAP(0x623c680)
    }
}
