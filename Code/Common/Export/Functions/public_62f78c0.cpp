#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f6f40);

#define public_62f78ed _public_62f78ed
#define public_62f790c _public_62f790c
#define public_62f792b _public_62f792b
#define public_62f794a _public_62f794a
#define public_62f7969 _public_62f7969

PROC_DECLARE(0x62f78c0, internal_62f78c0, public_62f78c0);
extern "C" NAKED register_t __cdecl internal_62f78c0()
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
        jnp public_62f78ed
        mov eax, dword ptr ds : [edi+0x80]
        mov dword ptr ds : [esi+0x80], eax
        public_62f78ed : nop
        fld dword ptr ds : [edi+0x84]
        fcomp dword ptr ds : [esi+0x84]
        fnstsw ax
        test ah, 0x44
        jnp public_62f790c
        mov ecx, dword ptr ds : [edi+0x84]
        mov dword ptr ds : [esi+0x84], ecx
        public_62f790c : nop
        fld dword ptr ds : [edi+0x88]
        fcomp dword ptr ds : [esi+0x88]
        fnstsw ax
        test ah, 0x44
        jnp public_62f792b
        mov edx, dword ptr ds : [edi+0x88]
        mov dword ptr ds : [esi+0x88], edx
        public_62f792b : nop
        fld dword ptr ds : [edi+0x90]
        fcomp dword ptr ds : [esi+0x90]
        fnstsw ax
        test ah, 0x44
        jnp public_62f794a
        mov eax, dword ptr ds : [edi+0x90]
        mov dword ptr ds : [esi+0x90], eax
        public_62f794a : nop
        fld dword ptr ds : [edi+0x8C]
        fcomp dword ptr ds : [esi+0x8C]
        fnstsw ax
        test ah, 0x44
        jnp public_62f7969
        mov ecx, dword ptr ds : [edi+0x8C]
        mov dword ptr ds : [esi+0x8C], ecx
        public_62f7969 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62f78c0)
    }
}

#undef public_62f78ed
#undef public_62f790c
#undef public_62f792b
#undef public_62f794a
#undef public_62f7969
