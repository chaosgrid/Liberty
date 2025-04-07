#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f4410);

#define public_62f51e1 _public_62f51e1
#define public_62f51f4 _public_62f51f4
#define public_62f5213 _public_62f5213
#define public_62f5226 _public_62f5226
#define public_62f5239 _public_62f5239
#define public_62f5258 _public_62f5258

PROC_DECLARE(0x62f51c0, internal_62f51c0, public_62f51c0);
extern "C" NAKED register_t __cdecl internal_62f51c0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        mov esi, ecx
        call public_62f4410
        fld dword ptr ds : [edi+0x78]
        fcomp dword ptr ds : [esi+0x78]
        fnstsw ax
        test ah, 0x44
        jnp public_62f51e1
        mov eax, dword ptr ds : [edi+0x78]
        mov dword ptr ds : [esi+0x78], eax
        public_62f51e1 : nop
        fld dword ptr ds : [edi+0x7C]
        fcomp dword ptr ds : [esi+0x7C]
        fnstsw ax
        test ah, 0x44
        jnp public_62f51f4
        mov ecx, dword ptr ds : [edi+0x7C]
        mov dword ptr ds : [esi+0x7C], ecx
        public_62f51f4 : nop
        fld dword ptr ds : [edi+0x80]
        fcomp dword ptr ds : [esi+0x80]
        fnstsw ax
        test ah, 0x44
        jnp public_62f5213
        mov edx, dword ptr ds : [edi+0x80]
        mov dword ptr ds : [esi+0x80], edx
        public_62f5213 : nop
        fld dword ptr ds : [edi+0x70]
        fcomp dword ptr ds : [esi+0x70]
        fnstsw ax
        test ah, 0x44
        jnp public_62f5226
        mov eax, dword ptr ds : [edi+0x70]
        mov dword ptr ds : [esi+0x70], eax
        public_62f5226 : nop
        fld dword ptr ds : [edi+0x74]
        fcomp dword ptr ds : [esi+0x74]
        fnstsw ax
        test ah, 0x44
        jnp public_62f5239
        mov ecx, dword ptr ds : [edi+0x74]
        mov dword ptr ds : [esi+0x74], ecx
        public_62f5239 : nop
        fld dword ptr ds : [edi+0x88]
        fcomp dword ptr ds : [esi+0x88]
        fnstsw ax
        test ah, 0x44
        jnp public_62f5258
        mov edx, dword ptr ds : [edi+0x88]
        mov dword ptr ds : [esi+0x88], edx
        public_62f5258 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62f51c0)
    }
}

#undef public_62f51e1
#undef public_62f51f4
#undef public_62f5213
#undef public_62f5226
#undef public_62f5239
#undef public_62f5258
