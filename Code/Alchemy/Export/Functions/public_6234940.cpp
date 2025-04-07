#include "Alchemy-PCH.h"

PROC_DECLARE(0x6234940, internal_6234940, public_6234940);
extern "C" NAKED register_t __cdecl internal_6234940()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x100]
        inc ecx
        mov dword ptr ds : [eax+0x100], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6234940)
    }
}
