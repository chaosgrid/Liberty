#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623b080);

PROC_DECLARE(0x623b080, internal_623b080, public_623b080);
extern "C" NAKED register_t __cdecl internal_623b080()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov cl, byte ptr ds : [eax+0xA1]
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 8
        UNREACHABLE_TRAP(0x623b080)
    }
}
