#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f54c0);
CLANG_FORWARD_PROC_SYMBOL(public_62f6200);

#define public_62f622d _public_62f622d
#define public_62f624c _public_62f624c
#define public_62f6260 _public_62f6260
#define public_62f627f _public_62f627f

PROC_DECLARE(0x62f6200, internal_62f6200, public_62f6200);
extern "C" NAKED register_t __cdecl internal_62f6200()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        mov esi, ecx
        call public_62f54c0
        fld dword ptr ds : [edi+0x8C]
        fcomp dword ptr ds : [esi+0x8C]
        fnstsw ax
        test ah, 0x44
        jnp public_62f622d
        mov eax, dword ptr ds : [edi+0x8C]
        mov dword ptr ds : [esi+0x8C], eax
        public_62f622d : nop
        fld dword ptr ds : [edi+0x94]
        fcomp dword ptr ds : [esi+0x94]
        fnstsw ax
        test ah, 0x44
        jnp public_62f624c
        mov ecx, dword ptr ds : [edi+0x94]
        mov dword ptr ds : [esi+0x94], ecx
        public_62f624c : nop
        mov eax, dword ptr ds : [edi+0x98]
        cmp eax, dword ptr ds : [esi+0x98]
        je public_62f6260
        mov dword ptr ds : [esi+0x98], eax
        public_62f6260 : nop
        fld dword ptr ds : [edi+0x90]
        fcomp dword ptr ds : [esi+0x90]
        fnstsw ax
        test ah, 0x44
        jnp public_62f627f
        mov edx, dword ptr ds : [edi+0x90]
        mov dword ptr ds : [esi+0x90], edx
        public_62f627f : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62f6200)
    }
}

#undef public_62f622d
#undef public_62f624c
#undef public_62f6260
#undef public_62f627f
