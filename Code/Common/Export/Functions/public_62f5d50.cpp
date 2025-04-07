#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f54c0);

#define public_62f5d72 _public_62f5d72
#define public_62f5d91 _public_62f5d91
#define public_62f5db0 _public_62f5db0
#define public_62f5dcf _public_62f5dcf
#define public_62f5dee _public_62f5dee
#define public_62f5e0d _public_62f5e0d

PROC_DECLARE(0x62f5d50, internal_62f5d50, public_62f5d50);
extern "C" NAKED register_t __cdecl internal_62f5d50()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        mov esi, ecx
        call public_62f54c0
        mov eax, dword ptr ds : [edi+0x8C]
        cmp eax, dword ptr ds : [esi+0x8C]
        je public_62f5d72
        mov dword ptr ds : [esi+0x8C], eax
        public_62f5d72 : nop
        fld dword ptr ds : [edi+0x90]
        fcomp dword ptr ds : [esi+0x90]
        fnstsw ax
        test ah, 0x44
        jnp public_62f5d91
        mov eax, dword ptr ds : [edi+0x90]
        mov dword ptr ds : [esi+0x90], eax
        public_62f5d91 : nop
        fld dword ptr ds : [edi+0x98]
        fcomp dword ptr ds : [esi+0x98]
        fnstsw ax
        test ah, 0x44
        jnp public_62f5db0
        mov ecx, dword ptr ds : [edi+0x98]
        mov dword ptr ds : [esi+0x98], ecx
        public_62f5db0 : nop
        fld dword ptr ds : [edi+0x9C]
        fcomp dword ptr ds : [esi+0x9C]
        fnstsw ax
        test ah, 0x44
        jnp public_62f5dcf
        mov edx, dword ptr ds : [edi+0x9C]
        mov dword ptr ds : [esi+0x9C], edx
        public_62f5dcf : nop
        fld dword ptr ds : [edi+0xA4]
        fcomp dword ptr ds : [esi+0xA4]
        fnstsw ax
        test ah, 0x44
        jnp public_62f5dee
        mov eax, dword ptr ds : [edi+0xA4]
        mov dword ptr ds : [esi+0xA4], eax
        public_62f5dee : nop
        fld dword ptr ds : [edi+0xA0]
        fcomp dword ptr ds : [esi+0xA0]
        fnstsw ax
        test ah, 0x44
        jnp public_62f5e0d
        mov ecx, dword ptr ds : [edi+0xA0]
        mov dword ptr ds : [esi+0xA0], ecx
        public_62f5e0d : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62f5d50)
    }
}

#undef public_62f5d72
#undef public_62f5d91
#undef public_62f5db0
#undef public_62f5dcf
#undef public_62f5dee
#undef public_62f5e0d
