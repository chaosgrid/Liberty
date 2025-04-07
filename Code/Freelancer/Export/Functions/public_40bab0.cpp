#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4022f0);
CLANG_FORWARD_PROC_SYMBOL(public_402500);

#define public_40badc _public_40badc
#define public_40baea _public_40baea
#define public_40bb16 _public_40bb16
#define public_40bb1b _public_40bb1b
#define public_40bb30 _public_40bb30
#define public_40bb44 _public_40bb44
#define public_40bb4f _public_40bb4f
#define public_40bb62 _public_40bb62
#define public_40bb75 _public_40bb75
#define public_40bb88 _public_40bb88

PROC_DECLARE(0x40bab0, internal_40bab0, public_40bab0);
extern "C" NAKED register_t __cdecl internal_40bab0()
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
        jnp public_40badc
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], ecx
        public_40badc : nop
        cmp dword ptr ds : [ebx], 0
        jne public_40baea
        mov dword ptr ds : [esi+0xC], 0xBF800000
        jmp public_40bb44
        public_40baea : nop
        mov ecx, dword ptr ds : [esi+0x14]
        call dword ptr ds : [public_5c602c]
        test al, al
        je public_40bb44
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        cmp eax, 3
        je public_40bb16
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        cmp eax, 2
        mov byte ptr ss : [esp+0x10], 0
        jne public_40bb1b
        public_40bb16 : nop
        mov byte ptr ss : [esp+0x10], 1
        public_40bb1b : nop
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        mov ecx, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [ecx+0x40]
        jne public_40bb30
        mov dword ptr ds : [esi+0xC], 0xBF800000
        jmp public_40bb44
        public_40bb30 : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push 0
        push eax
        push ecx
        call public_4022f0
        fstp dword ptr ds : [esi+0xC]
        add esp, 0x10
        public_40bb44 : nop
        mov eax, dword ptr ds : [edi+0x54]
        cmp eax, dword ptr ds : [esi+0x54]
        je public_40bb4f
        mov dword ptr ds : [esi+0x54], eax
        public_40bb4f : nop
        fld dword ptr ds : [edi+0x58]
        fcomp dword ptr ds : [esi+0x58]
        fnstsw ax
        test ah, 0x44
        jnp public_40bb62
        mov eax, dword ptr ds : [edi+0x58]
        mov dword ptr ds : [esi+0x58], eax
        public_40bb62 : nop
        fld dword ptr ds : [edi+0x5C]
        fcomp dword ptr ds : [esi+0x5C]
        fnstsw ax
        test ah, 0x44
        jnp public_40bb75
        mov ecx, dword ptr ds : [edi+0x5C]
        mov dword ptr ds : [esi+0x5C], ecx
        public_40bb75 : nop
        fld dword ptr ds : [edi+0x60]
        fcomp dword ptr ds : [esi+0x60]
        fnstsw ax
        test ah, 0x44
        jnp public_40bb88
        mov edx, dword ptr ds : [edi+0x60]
        mov dword ptr ds : [esi+0x60], edx
        public_40bb88 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x40bab0)
    }
}

#undef public_40badc
#undef public_40baea
#undef public_40bb16
#undef public_40bb1b
#undef public_40bb30
#undef public_40bb44
#undef public_40bb4f
#undef public_40bb62
#undef public_40bb75
#undef public_40bb88
