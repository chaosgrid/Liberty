#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_5991b4 _public_5991b4
#define public_599217 _public_599217

PROC_DECLARE(0x599160, internal_599160, public_599160);
extern "C" NAKED register_t __cdecl internal_599160()
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
        mov eax, dword ptr ds : [public_67da38]
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
        jne public_5991b4
        call public_5b73e0
        mov dword ptr ds : [public_67da38], eax
        public_5991b4 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+4]
        push edx
        lea edx, ds:[esi+0xF4]
        push edx
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 1
        jne public_599217
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [esi+0x7C]
        fnstsw ax
        test ah, 5
        jp public_599217
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jp public_599217
        fld dword ptr ds : [esi+0x80]
        fchs 
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 5
        jp public_599217
        mov al, 1
        pop esi
        add esp, 0x18
        ret 4
        public_599217 : nop
        xor al, al
        pop esi
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x599160)
    }
}

#undef public_5991b4
#undef public_599217
