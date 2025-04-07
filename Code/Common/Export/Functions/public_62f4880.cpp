#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f4410);

#define public_62f48a1 _public_62f48a1
#define public_62f48b4 _public_62f48b4
#define public_62f48c7 _public_62f48c7
#define public_62f48da _public_62f48da

PROC_DECLARE(0x62f4880, internal_62f4880, public_62f4880);
extern "C" NAKED register_t __cdecl internal_62f4880()
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
        jnp public_62f48a1
        mov eax, dword ptr ds : [edi+0x70]
        mov dword ptr ds : [esi+0x70], eax
        public_62f48a1 : nop
        fld dword ptr ds : [edi+0x74]
        fcomp dword ptr ds : [esi+0x74]
        fnstsw ax
        test ah, 0x44
        jnp public_62f48b4
        mov ecx, dword ptr ds : [edi+0x74]
        mov dword ptr ds : [esi+0x74], ecx
        public_62f48b4 : nop
        fld dword ptr ds : [edi+0x78]
        fcomp dword ptr ds : [esi+0x78]
        fnstsw ax
        test ah, 0x44
        jnp public_62f48c7
        mov edx, dword ptr ds : [edi+0x78]
        mov dword ptr ds : [esi+0x78], edx
        public_62f48c7 : nop
        fld dword ptr ds : [edi+0x7C]
        fcomp dword ptr ds : [esi+0x7C]
        fnstsw ax
        test ah, 0x44
        jnp public_62f48da
        mov eax, dword ptr ds : [edi+0x7C]
        mov dword ptr ds : [esi+0x7C], eax
        public_62f48da : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62f4880)
    }
}

#undef public_62f48a1
#undef public_62f48b4
#undef public_62f48c7
#undef public_62f48da
