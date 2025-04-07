#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623b0e0);

PROC_DECLARE(0x623b0e0, internal_623b0e0, public_623b0e0);
extern "C" NAKED register_t __cdecl internal_623b0e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov cl, byte ptr ds : [eax+0xA2]
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 8
        UNREACHABLE_TRAP(0x623b0e0)
    }
}
