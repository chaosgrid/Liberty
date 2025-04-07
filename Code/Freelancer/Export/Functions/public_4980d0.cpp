#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4980d0);

#define public_4981d8 _public_4981d8
#define public_4981da _public_4981da

PROC_DECLARE(0x4980d0, internal_4980d0, public_4980d0);
extern "C" NAKED register_t __cdecl internal_4980d0()
{
    __asm
    {
        sub esp, 0x18
        fild dword ptr ds : [public_616840]
        push esi
        mov esi, ecx
        fst dword ptr ss : [esp+0xC]
        fsub dword ptr ds : [esi+0x424]
        fild dword ptr ds : [public_616844]
        fst dword ptr ss : [esp+8]
        fsub dword ptr ds : [esi+0x428]
        fstp dword ptr ss : [esp+4]
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 1
        jne public_4981d8
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 1
        jne public_4981d8
        fcomp dword ptr ds : [esi+0x430]
        fnstsw ax
        test ah, 5
        jp public_4981da
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [esi+0x434]
        fnstsw ax
        test ah, 5
        jp public_4981da
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi+0xC80]
        push edx
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        lea edx, ss:[esp+0x18]
        lea eax, ds:[esi+0xC80]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        fld dword ptr ss : [esp+0x18]
        fdivr qword ptr ds : [public_5d3dc8]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x14]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [esi+0x418]
        fmul dword ptr ds : [public_5c75e0]
        fdivr st, st(1)
        fstp dword ptr ds : [eax]
        fstp st(0)
        fstp st(0)
        fld dword ptr ds : [esi+0x41C]
        pop esi
        fmul dword ptr ds : [public_5c75e0]
        fdivr dword ptr ss : [esp+0x10]
        fchs 
        fstp dword ptr ds : [ecx]
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [public_5c75e0]
        fadd dword ptr ds : [public_5c75e0]
        fstp dword ptr ds : [eax]
        mov al, 1
        fld dword ptr ds : [ecx]
        fmul dword ptr ds : [public_5c75e0]
        fadd dword ptr ds : [public_5c75e0]
        fstp dword ptr ds : [ecx]
        add esp, 0x18
        ret 8
        public_4981d8 : nop
        fstp st(0)
        public_4981da : nop
        xor al, al
        pop esi
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x4980d0)
    }
}

#undef public_4981d8
#undef public_4981da
