#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621d760);

PROC_DECLARE(0x621d760, internal_621d760, public_621d760);
extern "C" NAKED register_t __cdecl internal_621d760()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0x3C]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 8
        UNREACHABLE_TRAP(0x621d760)
    }
}
