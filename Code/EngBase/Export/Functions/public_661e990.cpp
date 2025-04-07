#include "EngBase-PCH.h"

PROC_DECLARE(0x661e990, internal_661e990, public_661e990);
extern "C" NAKED register_t __cdecl internal_661e990()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x1C]
        inc ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x661e990)
    }
}
