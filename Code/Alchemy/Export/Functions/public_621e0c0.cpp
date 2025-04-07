#include "Alchemy-PCH.h"

PROC_DECLARE(0x621e0c0, internal_621e0c0, public_621e0c0);
extern "C" NAKED register_t __cdecl internal_621e0c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x10C]
        inc ecx
        mov dword ptr ds : [eax+0x10C], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x621e0c0)
    }
}
