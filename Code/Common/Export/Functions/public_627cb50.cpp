#include "Common-PCH.h"

PROC_DECLARE(0x627cb50, internal_627cb50, public_627cb50);
extern "C" NAKED register_t __cdecl internal_627cb50()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        lea edi, ds:[ecx+8]
        mov ecx, 0xC
        rep movsd
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x627cb50)
    }
}
