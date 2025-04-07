#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621bf20);

PROC_DECLARE(0x621bf20, internal_621bf20, public_621bf20);
extern "C" NAKED register_t __cdecl internal_621bf20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0x30]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 8
        UNREACHABLE_TRAP(0x621bf20)
    }
}
