#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_58f434 _public_58f434
#define public_58f49a _public_58f49a

PROC_DECLARE(0x58f3e0, internal_58f3e0, public_58f3e0);
extern "C" NAKED register_t __cdecl internal_58f3e0()
{
    __asm
    {
        sub esp, 0x18
        mov eax, dword ptr ss : [esp+0x1C]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [eax]
        fld dword ptr ds : [esi+0x68]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0xC], eax
        fdiv dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [public_67d95c]
        test eax, eax
        mov dword ptr ss : [esp+4], ecx
        mov dword ptr ss : [esp+8], edx
        fld dword ptr ss : [esp+4]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+8]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0xC]
        jne public_58f434
        call public_5b73e0
        mov dword ptr ds : [public_67d95c], eax
        public_58f434 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+4]
        push edx
        lea edx, ds:[esi+0x504]
        push edx
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 1
        jne public_58f49a
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [esi+0x488]
        fnstsw ax
        test ah, 5
        jp public_58f49a
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jp public_58f49a
        fld dword ptr ds : [esi+0x48C]
        fchs 
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 5
        jp public_58f49a
        mov al, 1
        pop esi
        add esp, 0x18
        ret 4
        public_58f49a : nop
        xor al, al
        pop esi
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x58f3e0)
    }
}

#undef public_58f434
#undef public_58f49a
