#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f080);
CLANG_FORWARD_PROC_SYMBOL(public_503f40);
CLANG_FORWARD_PROC_SYMBOL(public_536800);
CLANG_FORWARD_PROC_SYMBOL(public_536fb0);

#define public_53647e _public_53647e
#define public_536499 _public_536499
#define public_5364a3 _public_5364a3
#define public_5364c3 _public_5364c3
#define public_536500 _public_536500
#define public_53652f _public_53652f
#define public_53659b _public_53659b
#define public_5365ae _public_5365ae
#define public_5365f8 _public_5365f8
#define public_536623 _public_536623
#define public_53662a _public_53662a
#define public_536655 _public_536655
#define public_53666b _public_53666b
#define public_53667c _public_53667c
#define public_536696 _public_536696

PROC_DECLARE(0x536460, internal_536460, public_536460);
extern "C" NAKED register_t __cdecl internal_536460()
{
    __asm
    {
        sub esp, 0x44
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+0xC]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x158]
        test al, al
        je public_53647e
        xor al, al
        pop ebx
        add esp, 0x44
        ret 4
        public_53647e : nop
        mov ecx, dword ptr ds : [ebx+0x20]
        push esi
        mov esi, 0xBF800000
        mov eax, ecx
        cmp eax, esi
        mov dword ptr ds : [ebx+0x24], ecx
        jne public_536499
        mov edx, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [ebx+0x20], edx
        jmp public_5364a3
        public_536499 : nop
        fld dword ptr ss : [esp+0x50]
        fadd dword ptr ds : [ebx+0x20]
        fstp dword ptr ds : [ebx+0x20]
        public_5364a3 : nop
        fld dword ptr ds : [ebx+0x1C]
        mov eax, dword ptr ds : [ebx+8]
        fsub dword ptr ss : [esp+0x50]
        push ebp
        fstp dword ptr ds : [ebx+0x1C]
        mov eax, dword ptr ds : [eax+0x24]
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        mov dword ptr ss : [esp+0x10], eax
        je public_5365ae
        push edi
        public_5364c3 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [esp+0x58], ecx
        fld dword ptr ss : [esp+0x58]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 1
        jne public_536500
        fld dword ptr ds : [ebx+0x24]
        fcomp dword ptr ss : [esp+0x58]
        fnstsw ax
        test ah, 5
        jp public_53659b
        fld dword ptr ds : [ebx+0x20]
        fcomp dword ptr ss : [esp+0x58]
        fnstsw ax
        test ah, 1
        je public_53652f
        jmp public_53659b
        public_536500 : nop
        fld dword ptr ds : [ebx+0x1C]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jp public_53659b
        cmp dword ptr ds : [ebx+0x24], esi
        je public_53652f
        fld dword ptr ds : [ebx+0x20]
        fsub dword ptr ds : [ebx+0x24]
        fadd dword ptr ds : [ebx+0x1C]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_53659b
        public_53652f : nop
        mov ecx, dword ptr ds : [ebx+0xC]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        mov esi, eax
        mov ecx, 9
        lea edi, ss:[esp+0x24]
        rep movsd
        lea eax, ds:[ebx+0x10]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x48], ecx
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ss : [esp+0x50], eax
        lea eax, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x4C], edx
        mov edx, dword ptr ds : [ecx]
        push eax
        lea esi, ss:[ebp+8]
        call dword ptr ds : [edx+4]
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], eax
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_53659b
        mov ecx, dword ptr ss : [esp+0x10]
        push 0
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        push esi
        call public_40f080
        add esp, 4
        push eax
        mov ecx, offset public_674c60
        call public_503f40
        public_53659b : nop
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ss : [esp+0x14]
        mov esi, 0xBF800000
        jne public_5364c3
        pop edi
        public_5365ae : nop
        mov ecx, dword ptr ds : [ebx+8]
        fld dword ptr ds : [ecx+0x38]
        pop ebp
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_53662a
        mov eax, dword ptr ds : [ecx+0x34]
        mov dword ptr ss : [esp+0x50], eax
        fld dword ptr ss : [esp+0x50]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 1
        jne public_5365f8
        fld dword ptr ds : [ebx+0x24]
        fcomp dword ptr ss : [esp+0x50]
        fnstsw ax
        test ah, 5
        jp public_53662a
        fld dword ptr ds : [ebx+0x20]
        fcomp dword ptr ss : [esp+0x50]
        fnstsw ax
        test ah, 1
        je public_536623
        jmp public_53662a
        public_5365f8 : nop
        fld dword ptr ds : [ebx+0x1C]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jp public_53662a
        cmp dword ptr ds : [ebx+0x24], esi
        je public_536623
        fld dword ptr ds : [ebx+0x20]
        fsub dword ptr ds : [ebx+0x24]
        fadd dword ptr ds : [ebx+0x1C]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_53662a
        public_536623 : nop
        mov ecx, ebx
        call public_536fb0
        public_53662a : nop
        fld dword ptr ds : [ebx+0x1C]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jp public_53667c
        cmp dword ptr ds : [ebx+0x24], esi
        je public_536655
        fld dword ptr ds : [ebx+0x20]
        fsub dword ptr ds : [ebx+0x24]
        fadd dword ptr ds : [ebx+0x1C]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_53667c
        public_536655 : nop
        mov ecx, dword ptr ds : [ebx+8]
        cmp dword ptr ds : [ecx+0x14], 2
        je public_53666b
        mov ecx, dword ptr ds : [ebx+0xC]
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+0x15C]
        public_53666b : nop
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [eax+0x14]
        test ecx, ecx
        jne public_53667c
        mov ecx, ebx
        call public_536800
        public_53667c : nop
        fld dword ptr ds : [ebx+0x1C]
        pop esi
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jp public_536696
        xor al, al
        pop ebx
        add esp, 0x44
        ret 4
        public_536696 : nop
        mov al, 1
        pop ebx
        add esp, 0x44
        ret 4
        UNREACHABLE_TRAP(0x536460)
    }
}

#undef public_53647e
#undef public_536499
#undef public_5364a3
#undef public_5364c3
#undef public_536500
#undef public_53652f
#undef public_53659b
#undef public_5365ae
#undef public_5365f8
#undef public_536623
#undef public_53662a
#undef public_536655
#undef public_53666b
#undef public_53667c
#undef public_536696
