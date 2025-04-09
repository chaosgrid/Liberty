#include "FreeLancer-PCH.h"

PROC_DECLARE(0x556b90, internal_556b90, public_556b90);
extern "C" NAKED register_t __cdecl internal_556b90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        lea edi, ds:[eax+0x5C]
        mov ecx, 9
        rep movsd
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x556b90)
    }
}
