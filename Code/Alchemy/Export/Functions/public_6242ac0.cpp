#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6242ac0);

PROC_DECLARE(0x6242ac0, internal_6242ac0, public_6242ac0);
extern "C" NAKED register_t __cdecl internal_6242ac0()
{
    __asm
    {
        push ecx
        movss xmm0, dword ptr ss : [esp+0x10]
        mulss xmm0, dword ptr ds : [public_624fa84]
        addss xmm0, dword ptr ds : [public_624fa88]
        movss xmm2, dword ptr ss : [esp+0xC]
        mulss xmm0, dword ptr ss : [esp+0x10]
        mulss xmm0, dword ptr ss : [esp+0x10]
        subss xmm2, dword ptr ss : [esp+8]
        mulss xmm2, xmm0
        addss xmm2, dword ptr ss : [esp+8]
        movss dword ptr ss : [esp], xmm2
        fld dword ptr ss : [esp]
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6242ac0)
    }
}
