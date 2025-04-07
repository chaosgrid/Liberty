#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f0910);

#define public_62f0928 _public_62f0928
#define public_62f0933 _public_62f0933
#define public_62f093e _public_62f093e
#define public_62f0951 _public_62f0951
#define public_62f095c _public_62f095c
#define public_62f096f _public_62f096f
#define public_62f0982 _public_62f0982
#define public_62f09af _public_62f09af
#define public_62f09bf _public_62f09bf

PROC_DECLARE(0x62f0910, internal_62f0910, public_62f0910);
extern "C" NAKED register_t __cdecl internal_62f0910()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        je public_62f0928
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x10]
        public_62f0928 : nop
        mov eax, dword ptr ds : [edi+0x14]
        cmp eax, dword ptr ds : [esi+0x14]
        je public_62f0933
        mov dword ptr ds : [esi+0x14], eax
        public_62f0933 : nop
        mov eax, dword ptr ds : [edi+0x18]
        cmp eax, dword ptr ds : [esi+0x18]
        je public_62f093e
        mov dword ptr ds : [esi+0x18], eax
        public_62f093e : nop
        fld dword ptr ds : [edi+0x1C]
        fcomp dword ptr ds : [esi+0x1C]
        fnstsw ax
        test ah, 0x44
        jnp public_62f0951
        mov eax, dword ptr ds : [edi+0x1C]
        mov dword ptr ds : [esi+0x1C], eax
        public_62f0951 : nop
        mov eax, dword ptr ds : [edi+0x24]
        cmp eax, dword ptr ds : [esi+0x24]
        je public_62f095c
        mov dword ptr ds : [esi+0x24], eax
        public_62f095c : nop
        fld dword ptr ds : [edi+0x28]
        fcomp dword ptr ds : [esi+0x28]
        fnstsw ax
        test ah, 0x44
        jnp public_62f096f
        mov ecx, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [esi+0x28], ecx
        public_62f096f : nop
        fld dword ptr ds : [edi+0x20]
        fcomp dword ptr ds : [esi+0x20]
        fnstsw ax
        test ah, 0x44
        jnp public_62f0982
        mov edx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [esi+0x20], edx
        public_62f0982 : nop
        fld dword ptr ds : [edi+0x2C]
        lea ecx, ds:[edi+0x2C]
        fcomp dword ptr ds : [esi+0x2C]
        lea edx, ds:[esi+0x2C]
        fnstsw ax
        test ah, 0x44
        jp public_62f09af
        fld dword ptr ds : [edi+0x30]
        fcomp dword ptr ds : [esi+0x30]
        fnstsw ax
        test ah, 0x44
        jp public_62f09af
        fld dword ptr ds : [edi+0x34]
        fcomp dword ptr ds : [esi+0x34]
        fnstsw ax
        test ah, 0x44
        jnp public_62f09bf
        public_62f09af : nop
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        public_62f09bf : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62f0910)
    }
}

#undef public_62f0928
#undef public_62f0933
#undef public_62f093e
#undef public_62f0951
#undef public_62f095c
#undef public_62f096f
#undef public_62f0982
#undef public_62f09af
#undef public_62f09bf
