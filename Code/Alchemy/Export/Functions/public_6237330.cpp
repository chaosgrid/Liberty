#include "Alchemy-PCH.h"

PROC_DECLARE(0x6237330, internal_6237330, public_6237330);
extern "C" NAKED register_t __cdecl internal_6237330()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0xC4]
        inc ecx
        mov dword ptr ds : [eax+0xC4], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6237330)
    }
}
