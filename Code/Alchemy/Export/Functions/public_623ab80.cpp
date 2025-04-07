#include "Alchemy-PCH.h"

PROC_DECLARE(0x623ab80, internal_623ab80, public_623ab80);
extern "C" NAKED register_t __cdecl internal_623ab80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0xE4]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 8
        UNREACHABLE_TRAP(0x623ab80)
    }
}
