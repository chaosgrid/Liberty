#include "Alchemy-PCH.h"

PROC_DECLARE(0x623e130, internal_623e130, public_623e130);
extern "C" NAKED register_t __cdecl internal_623e130()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+0xC], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x623e130)
    }
}
