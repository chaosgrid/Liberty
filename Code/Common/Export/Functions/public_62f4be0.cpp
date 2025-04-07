#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f4410);

#define public_62f4c01 _public_62f4c01
#define public_62f4c14 _public_62f4c14

PROC_DECLARE(0x62f4be0, internal_62f4be0, public_62f4be0);
extern "C" NAKED register_t __cdecl internal_62f4be0()
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
        jnp public_62f4c01
        mov eax, dword ptr ds : [edi+0x70]
        mov dword ptr ds : [esi+0x70], eax
        public_62f4c01 : nop
        fld dword ptr ds : [edi+0x74]
        fcomp dword ptr ds : [esi+0x74]
        fnstsw ax
        test ah, 0x44
        jnp public_62f4c14
        mov ecx, dword ptr ds : [edi+0x74]
        mov dword ptr ds : [esi+0x74], ecx
        public_62f4c14 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62f4be0)
    }
}

#undef public_62f4c01
#undef public_62f4c14
