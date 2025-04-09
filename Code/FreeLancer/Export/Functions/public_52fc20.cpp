#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52fc20);
CLANG_FORWARD_PROC_SYMBOL(public_52fe60);
CLANG_FORWARD_PROC_SYMBOL(public_540fc0);
CLANG_FORWARD_PROC_SYMBOL(public_554e90);

#define public_52fc4d _public_52fc4d
#define public_52fc66 _public_52fc66
#define public_52fc68 _public_52fc68
#define public_52fca3 _public_52fca3
#define public_52fca5 _public_52fca5
#define public_52fcab _public_52fcab
#define public_52fcb6 _public_52fcb6
#define public_52fcf7 _public_52fcf7
#define public_52fe3e _public_52fe3e
#define public_52fe4c _public_52fe4c

PROC_DECLARE(0x52fc20, internal_52fc20, public_52fc20);
extern "C" NAKED register_t __cdecl internal_52fc20()
{
    __asm
    {
        sub esp, 0x54
        push ebx
        push esi
        push edi
        lea eax, ss:[esp+0x1C]
        xor edi, edi
        push eax
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x20], 3
        call public_540fc0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_52fcb6
        mov ebx, dword ptr ds : [public_5c690c]
        public_52fc4d : nop
        lea eax, ds:[esi+0xC]
        test eax, eax
        je public_52fc66
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_52fc66
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x67
        cmp cl, 0x67
        je public_52fc68
        public_52fc66 : nop
        xor eax, eax
        public_52fc68 : nop
        fld dword ptr ds : [eax+0xE8]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 1
        jne public_52fcab
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x158]
        test al, al
        jne public_52fcab
        lea eax, ds:[esi+0xC]
        inc edi
        test eax, eax
        je public_52fca3
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_52fca3
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x67
        cmp cl, 0x67
        je public_52fca5
        public_52fca3 : nop
        xor eax, eax
        public_52fca5 : nop
        push eax
        call ebx
        add esp, 4
        public_52fcab : nop
        mov esi, dword ptr ds : [esi+0x14]
        test esi, esi
        jne public_52fc4d
        mov dword ptr ss : [esp+0xC], edi
        public_52fcb6 : nop
        fild dword ptr ss : [esp+0xC]
        push 4
        push ecx
        fstp dword ptr ss : [esp]
/*FIXUP push offset public_5ddd18 @0x52fcc0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ddd18
        call dword ptr ds : [public_5c6d1c]
        add esp, 0xC
        lea edx, ss:[esp+0x20]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        call public_554e90
        push eax
        call dword ptr ds : [public_5c6908]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 0xC
        cmp eax, ecx
        je public_52fe4c
        public_52fcf7 : nop
        mov edx, dword ptr ds : [public_6754bc]
        inc edx
        mov edi, eax
        mov dword ptr ds : [public_6754bc], edx
        add eax, 0x34
        lea ecx, ss:[esp+0x18]
        push ecx
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi]
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        push ecx
        call public_52fe60
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 0x10
        test eax, eax
        je public_52fe3e
        mov ecx, dword ptr ds : [edi+0xC]
        lea edx, ss:[esp+0x1C]
        push edx
        mov edx, dword ptr ds : [edi+4]
        lea eax, ss:[esp+0x18]
        push eax
        push ecx
        push edx
        call public_52fe60
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 0x10
        test eax, eax
        je public_52fe3e
        fld dword ptr ds : [edi+0x1C]
        lea esi, ds:[edi+0x1C]
        fchs 
        mov ebx, dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ds : [esi+4]
        lea ecx, ds:[edi+0x10]
        mov edx, dword ptr ds : [ecx]
        fchs 
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [esi+8]
        add edi, 0x28
        fchs 
        mov dword ptr ss : [esp+0x3C], edx
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x44], ecx
        mov ecx, dword ptr ss : [esp+0x28]
        fchs 
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x40], edx
        mov edx, dword ptr ss : [esp+0x24]
        fchs 
        mov dword ptr ss : [esp+0x4C], ecx
        mov ecx, dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ds : [edi+8]
        push ebx
        mov dword ptr ss : [esp+0x4C], edx
        fchs 
        mov edx, dword ptr ss : [esp+0x30]
        push eax
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x5C], ecx
        fstp dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x58], edx
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x64], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        push eax
        lea eax, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x64], edx
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x194]
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x50], eax
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x5C], eax
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x50], ecx
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x54], edx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x5C], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push eax
        lea eax, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x64], edx
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x194]
        public_52fe3e : nop
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ss : [esp+0x20]
        jne public_52fcf7
        public_52fe4c : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x54
        ret 
        UNREACHABLE_TRAP(0x52fc20)
    }
}

#undef public_52fc4d
#undef public_52fc66
#undef public_52fc68
#undef public_52fca3
#undef public_52fca5
#undef public_52fcab
#undef public_52fcb6
#undef public_52fcf7
#undef public_52fe3e
#undef public_52fe4c
