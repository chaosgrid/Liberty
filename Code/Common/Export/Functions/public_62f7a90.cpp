#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f6f40);

#define public_62f7abd _public_62f7abd
#define public_62f7adc _public_62f7adc
#define public_62f7af0 _public_62f7af0

PROC_DECLARE(0x62f7a90, internal_62f7a90, public_62f7a90);
extern "C" NAKED register_t __cdecl internal_62f7a90()
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
        jnp public_62f7abd
        mov eax, dword ptr ds : [edi+0x80]
        mov dword ptr ds : [esi+0x80], eax
        public_62f7abd : nop
        fld dword ptr ds : [edi+0x84]
        fcomp dword ptr ds : [esi+0x84]
        fnstsw ax
        test ah, 0x44
        jnp public_62f7adc
        mov ecx, dword ptr ds : [edi+0x84]
        mov dword ptr ds : [esi+0x84], ecx
        public_62f7adc : nop
        mov edi, dword ptr ds : [edi+0x88]
        cmp edi, dword ptr ds : [esi+0x88]
        je public_62f7af0
        mov dword ptr ds : [esi+0x88], edi
        public_62f7af0 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62f7a90)
    }
}

#undef public_62f7abd
#undef public_62f7adc
#undef public_62f7af0
