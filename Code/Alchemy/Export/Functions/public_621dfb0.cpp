#include "Alchemy-PCH.h"

PROC_DECLARE(0x621dfb0, internal_621dfb0, public_621dfb0);
extern "C" NAKED register_t __cdecl internal_621dfb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x84]
        inc ecx
        mov dword ptr ds : [eax+0x84], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x621dfb0)
    }
}
