#include "Alchemy-PCH.h"

PROC_DECLARE(0x623add0, internal_623add0, public_623add0);
extern "C" NAKED register_t __cdecl internal_623add0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0x90]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 8
        UNREACHABLE_TRAP(0x623add0)
    }
}
