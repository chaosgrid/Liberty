#include "Alchemy-PCH.h"

PROC_DECLARE(0x623c490, internal_623c490, public_623c490);
extern "C" NAKED register_t __cdecl internal_623c490()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+0x18], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x623c490)
    }
}
