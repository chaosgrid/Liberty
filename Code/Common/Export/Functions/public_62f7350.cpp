#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f6f40);

#define public_62f737d _public_62f737d
#define public_62f739c _public_62f739c
#define public_62f73b0 _public_62f73b0
#define public_62f73c4 _public_62f73c4
#define public_62f73e3 _public_62f73e3
#define public_62f7402 _public_62f7402
#define public_62f7421 _public_62f7421
#define public_62f7440 _public_62f7440

PROC_DECLARE(0x62f7350, internal_62f7350, public_62f7350);
extern "C" NAKED register_t __cdecl internal_62f7350()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        mov esi, ecx
        call public_62f6f40
        fld dword ptr ds : [edi+0x80]
        fcomp dword ptr ds : [esi+0x80]
        fnstsw ax
        test ah, 0x44
        jnp public_62f737d
        mov eax, dword ptr ds : [edi+0x80]
        mov dword ptr ds : [esi+0x80], eax
        public_62f737d : nop
        fld dword ptr ds : [edi+0x84]
        fcomp dword ptr ds : [esi+0x84]
        fnstsw ax
        test ah, 0x44
        jnp public_62f739c
        mov ecx, dword ptr ds : [edi+0x84]
        mov dword ptr ds : [esi+0x84], ecx
        public_62f739c : nop
        mov eax, dword ptr ds : [edi+0x88]
        cmp eax, dword ptr ds : [esi+0x88]
        je public_62f73b0
        mov dword ptr ds : [esi+0x88], eax
        public_62f73b0 : nop
        mov eax, dword ptr ds : [edi+0x8C]
        cmp eax, dword ptr ds : [esi+0x8C]
        je public_62f73c4
        mov dword ptr ds : [esi+0x8C], eax
        public_62f73c4 : nop
        fld dword ptr ds : [edi+0x94]
        fcomp dword ptr ds : [esi+0x94]
        fnstsw ax
        test ah, 0x44
        jnp public_62f73e3
        mov edx, dword ptr ds : [edi+0x94]
        mov dword ptr ds : [esi+0x94], edx
        public_62f73e3 : nop
        fld dword ptr ds : [edi+0x98]
        fcomp dword ptr ds : [esi+0x98]
        fnstsw ax
        test ah, 0x44
        jnp public_62f7402
        mov eax, dword ptr ds : [edi+0x98]
        mov dword ptr ds : [esi+0x98], eax
        public_62f7402 : nop
        fld dword ptr ds : [edi+0x9C]
        fcomp dword ptr ds : [esi+0x9C]
        fnstsw ax
        test ah, 0x44
        jnp public_62f7421
        mov ecx, dword ptr ds : [edi+0x9C]
        mov dword ptr ds : [esi+0x9C], ecx
        public_62f7421 : nop
        fld dword ptr ds : [edi+0xA0]
        fcomp dword ptr ds : [esi+0xA0]
        fnstsw ax
        test ah, 0x44
        jnp public_62f7440
        mov edx, dword ptr ds : [edi+0xA0]
        mov dword ptr ds : [esi+0xA0], edx
        public_62f7440 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62f7350)
    }
}

#undef public_62f737d
#undef public_62f739c
#undef public_62f73b0
#undef public_62f73c4
#undef public_62f73e3
#undef public_62f7402
#undef public_62f7421
#undef public_62f7440
