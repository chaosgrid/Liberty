#include "Alchemy-PCH.h"

PROC_DECLARE(0x623e150, internal_623e150, public_623e150);
extern "C" NAKED register_t __cdecl internal_623e150()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+0x14], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x623e150)
    }
}
