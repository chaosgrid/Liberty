#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623a920);

PROC_DECLARE(0x623a920, internal_623a920, public_623a920);
extern "C" NAKED register_t __cdecl internal_623a920()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0x30]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 8
        UNREACHABLE_TRAP(0x623a920)
    }
}
