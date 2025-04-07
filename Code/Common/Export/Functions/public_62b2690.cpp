#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6263bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6298f20);
CLANG_FORWARD_PROC_SYMBOL(public_629b440);
CLANG_FORWARD_PROC_SYMBOL(public_629b990);
CLANG_FORWARD_PROC_SYMBOL(public_62a92e0);
CLANG_FORWARD_PROC_SYMBOL(public_62aadc0);
CLANG_FORWARD_PROC_SYMBOL(public_63210e0);
CLANG_FORWARD_PROC_SYMBOL(public_633c1b0);

#define public_62b26e9 _public_62b26e9
#define public_62b2721 _public_62b2721
#define public_62b2750 _public_62b2750
#define public_62b2763 _public_62b2763
#define public_62b277c _public_62b277c
#define public_62b27a0 _public_62b27a0
#define public_62b27b3 _public_62b27b3
#define public_62b27b9 _public_62b27b9
#define public_62b27db _public_62b27db

PROC_DECLARE(0x62b2690, internal_62b2690, public_62b2690);
extern "C" NAKED register_t __cdecl internal_62b2690()
{
    __asm
    {
        sub esp, 0x20
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x2C]
        push esi
        push edi
        push ebp
        mov esi, ecx
        call public_62a92e0
        mov eax, dword ptr ss : [ebp+0xEC]
        mov edx, dword ptr ds : [esi+0x160]
        mov dword ptr ds : [esi+0x21C], eax
        mov cl, byte ptr ss : [ebp+0xF4]
        push edx
        mov byte ptr ds : [esi+0x2BC], cl
        call public_633c1b0
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_62b26e9
        mov ecx, dword ptr ds : [esi+0xAC]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax]
        mov ebx, dword ptr ds : [edi]
        mov ecx, eax
        call dword ptr ds : [edx]
        push eax
        mov ecx, edi
        call dword ptr ds : [ebx+0x58]
        public_62b26e9 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x60]
        mov eax, dword ptr ds : [esi+0x88]
        mov ecx, dword ptr ds : [eax+0xDC]
        cmp byte ptr ds : [ecx], 0
        je public_62b2721
        mov edx, dword ptr ds : [eax+0x44]
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [public_6399038]
        mov eax, dword ptr ds : [eax]
        mov ebx, dword ptr ds : [eax]
        push 0
        push 0
        push ecx
        push edi
        push edx
        push eax
        call dword ptr ds : [ebx+0x24]
        mov dword ptr ds : [esi+0x22C], eax
        public_62b2721 : nop
        push 0x80
        lea ecx, ss:[esp+0x14]
        call public_629b990
        lea ecx, ss:[esp+0x10]
        lea ebx, ds:[esi+0xE4]
        push ecx
        mov ecx, ebx
        call public_629b440
        push eax
        call public_6298f20
        add esp, 4
        test eax, eax
        je public_62b277c
        mov edi, edi
        public_62b2750 : nop
        mov edx, dword ptr ds : [eax+0x4C]
        mov cl, byte ptr ds : [edx+0x78]
        test cl, cl
        jne public_62b2763
        mov edx, dword ptr ds : [eax]
        push 1
        mov ecx, eax
        call dword ptr ds : [edx+0x30]
        public_62b2763 : nop
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, ebx
        call public_629b440
        push eax
        call public_6298f20
        add esp, 4
        test eax, eax
        jne public_62b2750
        public_62b277c : nop
        push 0x40000
        lea ecx, ss:[esp+0x24]
        call public_629b990
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, ebx
        call public_629b440
        mov edi, eax
        test edi, edi
        je public_62b27db
        lea esp, ss:[esp]
        public_62b27a0 : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+8]
        test al, al
        je public_62b27b3
        fld dword ptr ds : [public_6399408]
        jmp public_62b27b9
        public_62b27b3 : nop
        mov eax, dword ptr ds : [edi+0xC]
        fld dword ptr ds : [eax+0x78]
        public_62b27b9 : nop
        fadd dword ptr ds : [esi+0x2A4]
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, ebx
        fstp dword ptr ds : [esi+0x2A4]
        call public_629b440
        mov edi, eax
        test edi, edi
        jne public_62b27a0
        mov ebp, dword ptr ss : [esp+0x34]
        public_62b27db : nop
        mov edx, dword ptr ds : [esi+0x2A4]
        push 1
        lea ecx, ds:[esi+0x230]
        mov dword ptr ds : [esi+0x2A0], edx
        call public_6263bd0
        push 1
        lea ecx, ds:[esi+0x258]
        call public_6263bd0
        mov eax, dword ptr ss : [ebp+0x5C]
        mov dword ptr ds : [esi+0x160], eax
        mov ecx, dword ptr ss : [ebp+0x5C]
        push ecx
        mov ecx, esi
        call public_62aadc0
        mov edx, dword ptr ss : [ebp+0xF0]
        push edx
        lea eax, ds:[esi+0x104]
        push eax
        call public_63210e0
        mov eax, dword ptr ds : [esi+0xB4]
        add esp, 8
        test eax, eax
        pop edi
        setne cl
        mov byte ptr ds : [esi+0x2BD], cl
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 4
        UNREACHABLE_TRAP(0x62b2690)
    }
}

#undef public_62b26e9
#undef public_62b2721
#undef public_62b2750
#undef public_62b2763
#undef public_62b277c
#undef public_62b27a0
#undef public_62b27b3
#undef public_62b27b9
#undef public_62b27db
