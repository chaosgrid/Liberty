#include "Alchemy-PCH.h"

PROC_DECLARE(0x623a280, internal_623a280, public_623a280);
extern "C" NAKED register_t __cdecl internal_623a280()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x8C]
        inc ecx
        mov dword ptr ds : [eax+0x8C], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x623a280)
    }
}
