#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f4410);
CLANG_FORWARD_PROC_SYMBOL(public_62f54c0);

#define public_62f54d9 _public_62f54d9
#define public_62f54e4 _public_62f54e4
#define public_62f54f7 _public_62f54f7
#define public_62f550a _public_62f550a
#define public_62f551e _public_62f551e

PROC_DECLARE(0x62f54c0, internal_62f54c0, public_62f54c0);
extern "C" NAKED register_t __cdecl internal_62f54c0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        mov esi, ecx
        call public_62f4410
        mov eax, dword ptr ds : [edi+0x70]
        cmp eax, dword ptr ds : [esi+0x70]
        je public_62f54d9
        mov dword ptr ds : [esi+0x70], eax
        public_62f54d9 : nop
        mov eax, dword ptr ds : [edi+0x74]
        cmp eax, dword ptr ds : [esi+0x74]
        je public_62f54e4
        mov dword ptr ds : [esi+0x74], eax
        public_62f54e4 : nop
        fld dword ptr ds : [edi+0x78]
        fcomp dword ptr ds : [esi+0x78]
        fnstsw ax
        test ah, 0x44
        jnp public_62f54f7
        mov eax, dword ptr ds : [edi+0x78]
        mov dword ptr ds : [esi+0x78], eax
        public_62f54f7 : nop
        fld dword ptr ds : [edi+0x7C]
        fcomp dword ptr ds : [esi+0x7C]
        fnstsw ax
        test ah, 0x44
        jnp public_62f550a
        mov ecx, dword ptr ds : [edi+0x7C]
        mov dword ptr ds : [esi+0x7C], ecx
        public_62f550a : nop
        mov edi, dword ptr ds : [edi+0x80]
        cmp dword ptr ds : [esi+0x80], edi
        je public_62f551e
        mov dword ptr ds : [esi+0x80], edi
        public_62f551e : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62f54c0)
    }
}

#undef public_62f54d9
#undef public_62f54e4
#undef public_62f54f7
#undef public_62f550a
#undef public_62f551e
