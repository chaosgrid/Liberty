#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623acc0);

PROC_DECLARE(0x623acc0, internal_623acc0, public_623acc0);
extern "C" NAKED register_t __cdecl internal_623acc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+0x10], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x623acc0)
    }
}
