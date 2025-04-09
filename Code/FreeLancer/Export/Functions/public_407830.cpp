#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4022f0);
CLANG_FORWARD_PROC_SYMBOL(public_402500);

#define public_40785c _public_40785c
#define public_40786a _public_40786a
#define public_407896 _public_407896
#define public_40789b _public_40789b
#define public_4078b0 _public_4078b0
#define public_4078c4 _public_4078c4
#define public_4078cf _public_4078cf
#define public_4078da _public_4078da
#define public_4078ed _public_4078ed
#define public_407900 _public_407900
#define public_407913 _public_407913
#define public_407926 _public_407926
#define public_407945 _public_407945
#define public_407964 _public_407964
#define public_40797e _public_40797e
#define public_40798a _public_40798a

PROC_DECLARE(0x407830, internal_407830, public_407830);
extern "C" NAKED register_t __cdecl internal_407830()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi+4]
        mov esi, ecx
        push eax
        lea ebx, ds:[esi+4]
        push ebx
        call public_402500
        fld dword ptr ds : [edi+8]
        fcomp dword ptr ds : [esi+8]
        add esp, 8
        fnstsw ax
        test ah, 0x44
        jnp public_40785c
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], ecx
        public_40785c : nop
        cmp dword ptr ds : [ebx], 0
        jne public_40786a
        mov dword ptr ds : [esi+0xC], 0xBF800000
        jmp public_4078c4
        public_40786a : nop
        mov ecx, dword ptr ds : [esi+0x14]
        call dword ptr ds : [public_5c602c]
        test al, al
        je public_4078c4
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        cmp eax, 3
        je public_407896
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        cmp eax, 2
        mov byte ptr ss : [esp+0x10], 0
        jne public_40789b
        public_407896 : nop
        mov byte ptr ss : [esp+0x10], 1
        public_40789b : nop
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        mov ecx, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [ecx+0x40]
        jne public_4078b0
        mov dword ptr ds : [esi+0xC], 0xBF800000
        jmp public_4078c4
        public_4078b0 : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push 0
        push eax
        push ecx
        call public_4022f0
        fstp dword ptr ds : [esi+0xC]
        add esp, 0x10
        public_4078c4 : nop
        mov eax, dword ptr ds : [edi+0x58]
        cmp eax, dword ptr ds : [esi+0x58]
        je public_4078cf
        mov dword ptr ds : [esi+0x58], eax
        public_4078cf : nop
        mov eax, dword ptr ds : [edi+0x5C]
        cmp eax, dword ptr ds : [esi+0x5C]
        je public_4078da
        mov dword ptr ds : [esi+0x5C], eax
        public_4078da : nop
        fld dword ptr ds : [edi+0x74]
        fcomp dword ptr ds : [esi+0x74]
        fnstsw ax
        test ah, 0x44
        jnp public_4078ed
        mov eax, dword ptr ds : [edi+0x74]
        mov dword ptr ds : [esi+0x74], eax
        public_4078ed : nop
        fld dword ptr ds : [edi+0x70]
        fcomp dword ptr ds : [esi+0x70]
        fnstsw ax
        test ah, 0x44
        jnp public_407900
        mov ecx, dword ptr ds : [edi+0x70]
        mov dword ptr ds : [esi+0x70], ecx
        public_407900 : nop
        fld dword ptr ds : [edi+0x78]
        fcomp dword ptr ds : [esi+0x78]
        fnstsw ax
        test ah, 0x44
        jnp public_407913
        mov edx, dword ptr ds : [edi+0x78]
        mov dword ptr ds : [esi+0x78], edx
        public_407913 : nop
        fld dword ptr ds : [edi+0x7C]
        fcomp dword ptr ds : [esi+0x7C]
        fnstsw ax
        test ah, 0x44
        jnp public_407926
        mov eax, dword ptr ds : [edi+0x7C]
        mov dword ptr ds : [esi+0x7C], eax
        public_407926 : nop
        fld dword ptr ds : [edi+0x80]
        fcomp dword ptr ds : [esi+0x80]
        fnstsw ax
        test ah, 0x44
        jnp public_407945
        mov ecx, dword ptr ds : [edi+0x80]
        mov dword ptr ds : [esi+0x80], ecx
        public_407945 : nop
        fld dword ptr ds : [edi+0x84]
        fcomp dword ptr ds : [esi+0x84]
        fnstsw ax
        test ah, 0x44
        jnp public_407964
        mov edx, dword ptr ds : [edi+0x84]
        mov dword ptr ds : [esi+0x84], edx
        public_407964 : nop
        fld dword ptr ds : [edi+0x68]
        fcomp dword ptr ds : [esi+0x68]
        fnstsw ax
        test ah, 0x44
        jp public_40797e
        fld dword ptr ds : [edi+0x6C]
        fcomp dword ptr ds : [esi+0x6C]
        fnstsw ax
        test ah, 0x44
        jnp public_40798a
        public_40797e : nop
        mov eax, dword ptr ds : [edi+0x68]
        mov dword ptr ds : [esi+0x68], eax
        mov ecx, dword ptr ds : [edi+0x6C]
        mov dword ptr ds : [esi+0x6C], ecx
        public_40798a : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x407830)
    }
}

#undef public_40785c
#undef public_40786a
#undef public_407896
#undef public_40789b
#undef public_4078b0
#undef public_4078c4
#undef public_4078cf
#undef public_4078da
#undef public_4078ed
#undef public_407900
#undef public_407913
#undef public_407926
#undef public_407945
#undef public_407964
#undef public_40797e
#undef public_40798a
