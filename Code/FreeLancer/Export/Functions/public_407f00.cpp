#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4022f0);
CLANG_FORWARD_PROC_SYMBOL(public_402500);

#define public_407f2c _public_407f2c
#define public_407f3a _public_407f3a
#define public_407f66 _public_407f66
#define public_407f6b _public_407f6b
#define public_407f80 _public_407f80
#define public_407f94 _public_407f94
#define public_407fa7 _public_407fa7
#define public_407fb2 _public_407fb2

PROC_DECLARE(0x407f00, internal_407f00, public_407f00);
extern "C" NAKED register_t __cdecl internal_407f00()
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
        jnp public_407f2c
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [esi+8], ecx
        public_407f2c : nop
        cmp dword ptr ds : [edi], 0
        jne public_407f3a
        mov dword ptr ds : [esi+0xC], 0xBF800000
        jmp public_407f94
        public_407f3a : nop
        mov ecx, dword ptr ds : [esi+0x14]
        call dword ptr ds : [public_5c602c]
        test al, al
        je public_407f94
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        cmp eax, 3
        je public_407f66
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        cmp eax, 2
        mov byte ptr ss : [esp+0x10], 0
        jne public_407f6b
        public_407f66 : nop
        mov byte ptr ss : [esp+0x10], 1
        public_407f6b : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        mov ecx, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [ecx+0x40]
        jne public_407f80
        mov dword ptr ds : [esi+0xC], 0xBF800000
        jmp public_407f94
        public_407f80 : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push 0
        push eax
        push ecx
        call public_4022f0
        fstp dword ptr ds : [esi+0xC]
        add esp, 0x10
        public_407f94 : nop
        fld dword ptr ds : [ebx+0x54]
        fcomp dword ptr ds : [esi+0x54]
        fnstsw ax
        test ah, 0x44
        jnp public_407fa7
        mov eax, dword ptr ds : [ebx+0x54]
        mov dword ptr ds : [esi+0x54], eax
        public_407fa7 : nop
        mov eax, dword ptr ds : [ebx+0x58]
        cmp eax, dword ptr ds : [esi+0x58]
        je public_407fb2
        mov dword ptr ds : [esi+0x58], eax
        public_407fb2 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x407f00)
    }
}

#undef public_407f2c
#undef public_407f3a
#undef public_407f66
#undef public_407f6b
#undef public_407f80
#undef public_407f94
#undef public_407fa7
#undef public_407fb2
