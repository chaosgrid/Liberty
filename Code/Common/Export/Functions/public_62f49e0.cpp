#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f4410);

#define public_62f4a01 _public_62f4a01
#define public_62f4a14 _public_62f4a14
#define public_62f4a27 _public_62f4a27

PROC_DECLARE(0x62f49e0, internal_62f49e0, public_62f49e0);
extern "C" NAKED register_t __cdecl internal_62f49e0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        mov esi, ecx
        call public_62f4410
        fld dword ptr ds : [edi+0x70]
        fcomp dword ptr ds : [esi+0x70]
        fnstsw ax
        test ah, 0x44
        jnp public_62f4a01
        mov eax, dword ptr ds : [edi+0x70]
        mov dword ptr ds : [esi+0x70], eax
        public_62f4a01 : nop
        fld dword ptr ds : [edi+0x74]
        fcomp dword ptr ds : [esi+0x74]
        fnstsw ax
        test ah, 0x44
        jnp public_62f4a14
        mov ecx, dword ptr ds : [edi+0x74]
        mov dword ptr ds : [esi+0x74], ecx
        public_62f4a14 : nop
        fld dword ptr ds : [edi+0x78]
        fcomp dword ptr ds : [esi+0x78]
        fnstsw ax
        test ah, 0x44
        jnp public_62f4a27
        mov edx, dword ptr ds : [edi+0x78]
        mov dword ptr ds : [esi+0x78], edx
        public_62f4a27 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62f49e0)
    }
}

#undef public_62f4a01
#undef public_62f4a14
#undef public_62f4a27
