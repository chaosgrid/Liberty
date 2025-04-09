#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_429ee5 _public_429ee5
#define public_429f07 _public_429f07

PROC_DECLARE(0x429ec0, internal_429ec0, public_429ec0);
extern "C" NAKED register_t __cdecl internal_429ec0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0x54]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        je public_429ee5
        fld dword ptr ds : [esi+0x58]
        fcomp dword ptr ds : [public_5ca23c]
        fnstsw ax
        test ah, 5
        jp public_429f07
        public_429ee5 : nop
        fld dword ptr ds : [esi+0x54]
        call public_5b7ec0
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], eax
        fld dword ptr ds : [esi+0x58]
        call public_5b7ec0
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx], eax
        xor eax, eax
        pop esi
        ret 0xC
        public_429f07 : nop
        mov eax, 0xFFFFFFF9
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x429ec0)
    }
}

#undef public_429ee5
#undef public_429f07
