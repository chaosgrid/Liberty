#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_514260);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);

#define public_514275 _public_514275
#define public_514277 _public_514277
#define public_5142a2 _public_5142a2
#define public_5142a4 _public_5142a4
#define public_5142d4 _public_5142d4

PROC_DECLARE(0x514260, internal_514260, public_514260);
extern "C" NAKED register_t __cdecl internal_514260()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x14]
        push edi
        xor edi, edi
        test eax, eax
        je public_514275
        lea ecx, ds:[eax-8]
        jmp public_514277
        public_514275 : nop
        xor ecx, ecx
        public_514277 : nop
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        mov dl, byte ptr ds : [esi+0x1C]
        push edx
        lea edx, ss:[esp+0x10]
        push edx
        call dword ptr ds : [eax+0x130]
        test eax, eax
        jne public_5142d4
        mov esi, dword ptr ds : [esi+0x14]
        test esi, esi
        mov dword ptr ss : [esp+8], 0x3F800000
        je public_5142a2
        lea ecx, ds:[esi-8]
        jmp public_5142a4
        public_5142a2 : nop
        xor ecx, ecx
        public_5142a4 : nop
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+8]
        push edx
        call dword ptr ds : [eax+0x40]
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_5142d4
        mov eax, dword ptr ss : [esp+0xC]
        push 2
        push eax
        call public_5416c0
        add esp, 8
        pop edi
        pop esi
        add esp, 8
        ret 
        public_5142d4 : nop
        mov eax, edi
        pop edi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x514260)
    }
}

#undef public_514275
#undef public_514277
#undef public_5142a2
#undef public_5142a4
#undef public_5142d4
