#include "Freelancer-PCH.h"

PROC_DECLARE(0x556bb0, internal_556bb0, public_556bb0);
extern "C" NAKED register_t __cdecl internal_556bb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        lea edi, ds:[eax+0x5C]
        mov ecx, 0xC
        rep movsd
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x556bb0)
    }
}
