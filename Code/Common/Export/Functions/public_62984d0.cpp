#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62984d0);
CLANG_FORWARD_PROC_SYMBOL(public_6299ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6299b70);

#define public_629857d _public_629857d

PROC_DECLARE(0x62984d0, internal_62984d0, public_62984d0);
extern "C" NAKED register_t __cdecl internal_62984d0()
{
    __asm
    {
        sub esp, 0x18
        push esi
        push 0
        lea eax, ss:[esp+8]
        push eax
        mov esi, ecx
        call public_6299ac0
        mov ecx, dword ptr ss : [esp+0x20]
        fld dword ptr ds : [ecx]
        push 0
        fsub dword ptr ds : [eax]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ds : [ecx+8]
        lea ecx, ss:[esp+0x14]
        fsub dword ptr ds : [eax+8]
        push ecx
        mov ecx, esi
        fst dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(1)
        fmul st, st(2)
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_639a1d0]
        fstp dword ptr ss : [esp+0x28]
        fxch 
        fmul dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x14]
        call public_6299b70
        fld dword ptr ss : [esp+0x18]
        pop esi
        fmul dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+4]
        faddp 
        fld dword ptr ss : [esp]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fld dword ptr ss : [esp+0x20]
        fcos 
        fxch 
        fxch 
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_629857d
        mov eax, 1
        add esp, 0x18
        ret 8
        public_629857d : nop
        xor eax, eax
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x62984d0)
    }
}

#undef public_629857d
