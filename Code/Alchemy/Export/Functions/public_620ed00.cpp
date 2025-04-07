#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620ed00);

PROC_DECLARE(0x620ed00, internal_620ed00, public_620ed00);
extern "C" NAKED register_t __cdecl internal_620ed00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov cl, byte ptr ds : [eax+0x9A]
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 8
        UNREACHABLE_TRAP(0x620ed00)
    }
}
