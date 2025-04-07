#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f54c0);

#define public_62f5fdd _public_62f5fdd
#define public_62f5ffc _public_62f5ffc

PROC_DECLARE(0x62f5fb0, internal_62f5fb0, public_62f5fb0);
extern "C" NAKED register_t __cdecl internal_62f5fb0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        mov esi, ecx
        call public_62f54c0
        fld dword ptr ds : [edi+0x88]
        fcomp dword ptr ds : [esi+0x88]
        fnstsw ax
        test ah, 0x44
        jnp public_62f5fdd
        mov eax, dword ptr ds : [edi+0x88]
        mov dword ptr ds : [esi+0x88], eax
        public_62f5fdd : nop
        fld dword ptr ds : [edi+0x8C]
        fcomp dword ptr ds : [esi+0x8C]
        fnstsw ax
        test ah, 0x44
        jnp public_62f5ffc
        mov ecx, dword ptr ds : [edi+0x8C]
        mov dword ptr ds : [esi+0x8C], ecx
        public_62f5ffc : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62f5fb0)
    }
}

#undef public_62f5fdd
#undef public_62f5ffc
