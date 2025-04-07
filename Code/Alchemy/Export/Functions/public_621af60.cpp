#include "Alchemy-PCH.h"

PROC_DECLARE(0x621af60, internal_621af60, public_621af60);
extern "C" NAKED register_t __cdecl internal_621af60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x5C]
        inc ecx
        mov dword ptr ds : [eax+0x5C], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x621af60)
    }
}
