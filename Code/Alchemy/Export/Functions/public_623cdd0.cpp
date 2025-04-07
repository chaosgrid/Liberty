#include "Alchemy-PCH.h"

PROC_DECLARE(0x623cdd0, internal_623cdd0, public_623cdd0);
extern "C" NAKED register_t __cdecl internal_623cdd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x78]
        inc ecx
        mov dword ptr ds : [eax+0x78], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x623cdd0)
    }
}
