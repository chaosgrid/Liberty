#include "Alchemy-PCH.h"

PROC_DECLARE(0x6203e90, internal_6203e90, public_6203e90);
extern "C" NAKED register_t __cdecl internal_6203e90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+4]
        inc ecx
        mov dword ptr ds : [eax+4], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6203e90)
    }
}
