#include "Alchemy-PCH.h"

PROC_DECLARE(0x623db60, internal_623db60, public_623db60);
extern "C" NAKED register_t __cdecl internal_623db60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x58]
        inc ecx
        mov dword ptr ds : [eax+0x58], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x623db60)
    }
}
