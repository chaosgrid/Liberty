#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d4b50);
CLANG_FORWARD_PROC_SYMBOL(public_4d9750);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_4d9764 _public_4d9764
#define public_4d9781 _public_4d9781
#define public_4d9788 _public_4d9788
#define public_4d979b _public_4d979b
#define public_4d97b5 _public_4d97b5
#define public_4d97c4 _public_4d97c4
#define public_4d97e3 _public_4d97e3
#define public_4d97ea _public_4d97ea
#define public_4d9817 _public_4d9817

PROC_DECLARE(0x4d9750, internal_4d9750, public_4d9750);
extern "C" NAKED register_t __cdecl internal_4d9750()
{
    __asm
    {
        sub esp, 0xC
        push esi
        call public_54baf0
        test eax, eax
        jne public_4d9764
        xor al, al
        pop esi
        add esp, 0xC
        ret 
        public_4d9764 : nop
        add eax, 0xC
        test eax, eax
        je public_4d9781
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_4d9781
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        je public_4d9788
        public_4d9781 : nop
        xor al, al
        pop esi
        add esp, 0xC
        ret 
        public_4d9788 : nop
        call dword ptr ds : [public_5c6348]
        mov esi, eax
        test esi, esi
        jne public_4d979b
        xor al, al
        pop esi
        add esp, 0xC
        ret 
        public_4d979b : nop
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+4]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x88]
        test eax, eax
        je public_4d97b5
        xor al, al
        pop esi
        add esp, 0xC
        ret 
        public_4d97b5 : nop
        mov al, byte ptr ss : [esp+4]
        test al, al
        js public_4d97c4
        xor al, al
        pop esi
        add esp, 0xC
        ret 
        public_4d97c4 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_4d97e3
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_4d97ea
        public_4d97e3 : nop
        xor al, al
        pop esi
        add esp, 0xC
        ret 
        public_4d97ea : nop
        push 0
        lea edx, ss:[esp+0xC]
        push edx
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        call public_4d4b50
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_5c7474]
        add esp, 0x10
        fnstsw ax
        test ah, 0x41
        jne public_4d9817
        xor al, al
        pop esi
        add esp, 0xC
        ret 
        public_4d9817 : nop
        mov al, 1
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x4d9750)
    }
}

#undef public_4d9764
#undef public_4d9781
#undef public_4d9788
#undef public_4d979b
#undef public_4d97b5
#undef public_4d97c4
#undef public_4d97e3
#undef public_4d97ea
#undef public_4d9817
