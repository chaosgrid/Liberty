#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622ecd0);

PROC_DECLARE(0x622ecd0, internal_622ecd0, public_622ecd0);
extern "C" NAKED register_t __cdecl internal_622ecd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov cl, byte ptr ds : [eax+0xA1]
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 8
        UNREACHABLE_TRAP(0x622ecd0)
    }
}
