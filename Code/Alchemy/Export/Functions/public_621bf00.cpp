#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621bf00);

PROC_DECLARE(0x621bf00, internal_621bf00, public_621bf00);
extern "C" NAKED register_t __cdecl internal_621bf00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0x3C]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 8
        UNREACHABLE_TRAP(0x621bf00)
    }
}
