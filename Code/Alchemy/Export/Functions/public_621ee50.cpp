#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621ee50);

#define public_621ee63 _public_621ee63
#define public_621ee87 _public_621ee87
#define public_621eeb4 _public_621eeb4
#define public_621eec1 _public_621eec1

PROC_DECLARE(0x621ee50, internal_621ee50, public_621ee50);
extern "C" NAKED register_t __cdecl internal_621ee50()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        test esi, esi
        mov dword ptr ss : [esp+4], 0
        je public_621eec1
        push edi
        public_621ee63 : nop
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x10]
        push ecx
        push esi
        call dword ptr ds : [eax+0x68]
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ss : [esp+8]
        fnstsw ax
        and eax, 0x4100
        jne public_621ee87
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+8], edx
        public_621ee87 : nop
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x2C]
        mov edi, eax
        test edi, edi
        je public_621eeb4
        push edi
        call public_621ee50
        fcomp dword ptr ss : [esp+0xC]
        add esp, 4
        fnstsw ax
        test ah, 5
        jnp public_621eeb4
        push edi
        call public_621ee50
        fstp dword ptr ss : [esp+0xC]
        add esp, 4
        public_621eeb4 : nop
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+0x34]
        mov esi, eax
        test esi, esi
        jne public_621ee63
        pop edi
        public_621eec1 : nop
        fld dword ptr ss : [esp+4]
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x621ee50)
    }
}

#undef public_621ee63
#undef public_621ee87
#undef public_621eeb4
#undef public_621eec1
