#include "Freelancer-PCH.h"

PROC_DECLARE(0x4573e0, internal_4573e0, public_4573e0);
extern "C" NAKED register_t __cdecl internal_4573e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        lea edi, ds:[eax+0xA8]
        mov ecx, 9
        rep movsd
        pop edi
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x4573e0)
    }
}
