#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4022f0);
CLANG_FORWARD_PROC_SYMBOL(public_402500);

#define public_40a10c _public_40a10c
#define public_40a11a _public_40a11a
#define public_40a146 _public_40a146
#define public_40a14b _public_40a14b
#define public_40a160 _public_40a160
#define public_40a174 _public_40a174
#define public_40a17f _public_40a17f
#define public_40a18a _public_40a18a

PROC_DECLARE(0x40a0e0, internal_40a0e0, public_40a0e0);
extern "C" NAKED register_t __cdecl internal_40a0e0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ebx+4]
        push esi
        push edi
        mov esi, ecx
        push eax
        lea edi, ds:[esi+4]
        push edi
        call public_402500
        fld dword ptr ds : [ebx+8]
        fcomp dword ptr ds : [esi+8]
        add esp, 8
        fnstsw ax
        test ah, 0x44
        jnp public_40a10c
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [esi+8], ecx
        public_40a10c : nop
        cmp dword ptr ds : [edi], 0
        jne public_40a11a
        mov dword ptr ds : [esi+0xC], 0xBF800000
        jmp public_40a174
        public_40a11a : nop
        mov ecx, dword ptr ds : [esi+0x14]
        call dword ptr ds : [public_5c602c]
        test al, al
        je public_40a174
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        cmp eax, 3
        je public_40a146
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        cmp eax, 2
        mov byte ptr ss : [esp+0x10], 0
        jne public_40a14b
        public_40a146 : nop
        mov byte ptr ss : [esp+0x10], 1
        public_40a14b : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        mov ecx, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [ecx+0x40]
        jne public_40a160
        mov dword ptr ds : [esi+0xC], 0xBF800000
        jmp public_40a174
        public_40a160 : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push 0
        push eax
        push ecx
        call public_4022f0
        fstp dword ptr ds : [esi+0xC]
        add esp, 0x10
        public_40a174 : nop
        mov eax, dword ptr ds : [ebx+0x54]
        cmp eax, dword ptr ds : [esi+0x54]
        je public_40a17f
        mov dword ptr ds : [esi+0x54], eax
        public_40a17f : nop
        mov eax, dword ptr ds : [ebx+0x58]
        cmp eax, dword ptr ds : [esi+0x58]
        je public_40a18a
        mov dword ptr ds : [esi+0x58], eax
        public_40a18a : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x40a0e0)
    }
}

#undef public_40a10c
#undef public_40a11a
#undef public_40a146
#undef public_40a14b
#undef public_40a160
#undef public_40a174
#undef public_40a17f
#undef public_40a18a
