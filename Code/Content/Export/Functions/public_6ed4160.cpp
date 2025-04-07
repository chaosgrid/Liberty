#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed4160);
CLANG_FORWARD_PROC_SYMBOL(public_6f33f80);

#define public_6ed41ab _public_6ed41ab

PROC_DECLARE(0x6ed4160, internal_6ed4160, public_6ed4160);
extern "C" NAKED register_t __cdecl internal_6ed4160()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+4], 0
        call public_6f33f80
        mov dword ptr ss : [esp+0xC], eax
        lea eax, ss:[esp+4]
        push eax
        add esi, 4
        lea ecx, ss:[esp+0x10]
        push esi
        push ecx
        call dword ptr ds : [public_6fb35e8]
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6fb60ac]
        add esp, 0xC
        pop esi
        fnstsw ax
        test ah, 5
        jp public_6ed41ab
        mov eax, 1
        pop ecx
        ret 4
        public_6ed41ab : nop
        xor eax, eax
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6ed4160)
    }
}

#undef public_6ed41ab
