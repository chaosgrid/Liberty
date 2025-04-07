#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f4410);
CLANG_FORWARD_PROC_SYMBOL(public_62f6f40);

#define public_62f6f61 _public_62f6f61
#define public_62f6f74 _public_62f6f74
#define public_62f6f7f _public_62f6f7f
#define public_62f6f8a _public_62f6f8a

PROC_DECLARE(0x62f6f40, internal_62f6f40, public_62f6f40);
extern "C" NAKED register_t __cdecl internal_62f6f40()
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
        jnp public_62f6f61
        mov eax, dword ptr ds : [edi+0x70]
        mov dword ptr ds : [esi+0x70], eax
        public_62f6f61 : nop
        fld dword ptr ds : [edi+0x74]
        fcomp dword ptr ds : [esi+0x74]
        fnstsw ax
        test ah, 0x44
        jnp public_62f6f74
        mov ecx, dword ptr ds : [edi+0x74]
        mov dword ptr ds : [esi+0x74], ecx
        public_62f6f74 : nop
        mov al, byte ptr ds : [edi+0x78]
        cmp al, byte ptr ds : [esi+0x78]
        je public_62f6f7f
        mov byte ptr ds : [esi+0x78], al
        public_62f6f7f : nop
        mov al, byte ptr ds : [edi+0x79]
        cmp al, byte ptr ds : [esi+0x79]
        je public_62f6f8a
        mov byte ptr ds : [esi+0x79], al
        public_62f6f8a : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62f6f40)
    }
}

#undef public_62f6f61
#undef public_62f6f74
#undef public_62f6f7f
#undef public_62f6f8a
