#include "Alchemy-PCH.h"

PROC_DECLARE(0x6234a50, internal_6234a50, public_6234a50);
extern "C" NAKED register_t __cdecl internal_6234a50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x84]
        inc ecx
        mov dword ptr ds : [eax+0x84], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6234a50)
    }
}
