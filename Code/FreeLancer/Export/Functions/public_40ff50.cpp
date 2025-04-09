#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40ff50);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_40ff66 _public_40ff66
#define public_40ffd7 _public_40ffd7

PROC_DECLARE(0x40ff50, internal_40ff50, public_40ff50);
extern "C" NAKED register_t __cdecl internal_40ff50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6164d8]
        sub esp, 0xC
        test eax, eax
        jne public_40ff66
        call public_5b73e0
        mov dword ptr ds : [public_6164d8], eax
        public_40ff66 : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax]
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edx
        lea edx, ds:[esi+4]
        push edx
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        fld dword ptr ds : [esi+0xA4]
        fchs 
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 1
        jne public_40ffd7
        fld dword ptr ds : [public_5c7500]
        mov eax, dword ptr ss : [esp+0x18]
        fdiv dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+4]
        fmul dword ptr ds : [esi+0x78]
        fmul st, st(1)
        fadd dword ptr ds : [esi+0x68]
        fstp dword ptr ds : [eax]
        mov al, 1
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [esi+0x7C]
        fmul st, st(1)
        fadd dword ptr ds : [esi+0x6C]
        pop esi
        fstp dword ptr ds : [ecx]
        fstp st(0)
        fld dword ptr ss : [esp+8]
        fchs 
        fstp dword ptr ds : [edx]
        add esp, 0xC
        ret 0x14
        public_40ffd7 : nop
        xor al, al
        pop esi
        add esp, 0xC
        ret 0x14
        UNREACHABLE_TRAP(0x40ff50)
    }
}

#undef public_40ff66
#undef public_40ffd7
