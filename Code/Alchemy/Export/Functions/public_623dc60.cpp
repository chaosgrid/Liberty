#include "Alchemy-PCH.h"

PROC_DECLARE(0x623dc60, internal_623dc60, public_623dc60);
extern "C" NAKED register_t __cdecl internal_623dc60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0xB0]
        inc ecx
        mov dword ptr ds : [eax+0xB0], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x623dc60)
    }
}
