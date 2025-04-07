#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f350f0);

#define public_6f35121 _public_6f35121
#define public_6f3513c _public_6f3513c

PROC_DECLARE(0x6f350f0, internal_6f350f0, public_6f350f0);
extern "C" NAKED register_t __cdecl internal_6f350f0()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        call dword ptr ds : [public_6fb3474]
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_6fb95c0]
        add esp, 0xC
        fnstsw ax
        test ah, 1
        jne public_6f35121
        mov eax, 1
        pop ecx
        ret 
        public_6f35121 : nop
        fld dword ptr ss : [esp]
        fcomp dword ptr ds : [public_6fb95bc]
        fnstsw ax
        test ah, 0x41
        mov eax, 2
        je public_6f3513c
        mov eax, 4
        public_6f3513c : nop
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f350f0)
    }
}

#undef public_6f35121
#undef public_6f3513c
