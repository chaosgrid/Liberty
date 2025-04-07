#include "Freelancer-PCH.h"

PROC_DECLARE(0x51e0a0, internal_51e0a0, public_51e0a0);
extern "C" NAKED register_t __cdecl internal_51e0a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        lea edi, ds:[eax+0x14]
        mov ecx, 9
        rep movsd
        pop edi
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x51e0a0)
    }
}
