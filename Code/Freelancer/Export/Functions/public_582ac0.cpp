#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5803d0);

PROC_DECLARE(0x582ac0, internal_582ac0, public_582ac0);
extern "C" NAKED register_t __cdecl internal_582ac0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, ecx
        push edi
        lea edi, ds:[eax+0x3C]
        mov ecx, 9
        rep movsd
        mov ecx, eax
        call public_5803d0
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x582ac0)
    }
}
