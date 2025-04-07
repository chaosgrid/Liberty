#include "Common-PCH.h"

PROC_DECLARE(0x627cb30, internal_627cb30, public_627cb30);
extern "C" NAKED register_t __cdecl internal_627cb30()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        lea edi, ds:[ecx+8]
        mov ecx, 9
        rep movsd
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x627cb30)
    }
}
