#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5586b0, internal_5586b0, public_5586b0);
extern "C" NAKED register_t __cdecl internal_5586b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x58]
        inc ecx
        mov dword ptr ds : [eax+0x58], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x5586b0)
    }
}
