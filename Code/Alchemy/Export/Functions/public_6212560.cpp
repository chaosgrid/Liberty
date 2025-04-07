#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6212560);

PROC_DECLARE(0x6212560, internal_6212560, public_6212560);
extern "C" NAKED register_t __cdecl internal_6212560()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov cl, byte ptr ds : [eax+0xA2]
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 8
        UNREACHABLE_TRAP(0x6212560)
    }
}
