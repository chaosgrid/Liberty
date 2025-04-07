#include "Alchemy-PCH.h"

PROC_DECLARE(0x6240d00, internal_6240d00, public_6240d00);
extern "C" NAKED register_t __cdecl internal_6240d00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x50]
        inc ecx
        mov dword ptr ds : [eax+0x50], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6240d00)
    }
}
