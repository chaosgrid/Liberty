#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661af70);

#define public_661afc9 _public_661afc9
#define public_661afcf _public_661afcf

PROC_DECLARE(0x661af70, internal_661af70, public_661af70);
extern "C" NAKED register_t __cdecl internal_661af70()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp dword ptr ds : [esi], 0xBF800000
        je public_661afcf
        fld dword ptr ds : [esi]
        fcomp dword ptr ds : [public_66291e0]
        fnstsw ax
        test ah, 0x44
        jnp public_661afcf
        cmp dword ptr ds : [esi], 0xC0000000
        je public_661afcf
        mov eax, dword ptr ds : [ecx+0x24]
        lea edx, ss:[esp+8]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x10]
        fld dword ptr ds : [esi]
        fcomp dword ptr ss : [esp+8]
        fnstsw ax
        test ah, 0x41
        jp public_661afc9
        fld dword ptr ds : [esi]
        fcomp dword ptr ds : [public_66291e0]
        fnstsw ax
        and eax, 0x100
        jne public_661afc9
        mov eax, 1
        pop esi
        ret 4
        public_661afc9 : nop
        xor eax, eax
        pop esi
        ret 4
        public_661afcf : nop
        mov al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x661af70)
    }
}

#undef public_661afc9
#undef public_661afcf
