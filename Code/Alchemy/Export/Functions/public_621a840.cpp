#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621a840);

PROC_DECLARE(0x621a840, internal_621a840, public_621a840);
extern "C" NAKED register_t __cdecl internal_621a840()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+8], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x621a840)
    }
}
