#include "Alchemy-PCH.h"

PROC_DECLARE(0x622db90, internal_622db90, public_622db90);
extern "C" NAKED register_t __cdecl internal_622db90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x100]
        inc ecx
        mov dword ptr ds : [eax+0x100], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x622db90)
    }
}
