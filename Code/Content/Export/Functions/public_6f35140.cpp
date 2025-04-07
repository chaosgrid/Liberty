#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f35140);

#define public_6f35171 _public_6f35171
#define public_6f3518c _public_6f3518c

PROC_DECLARE(0x6f35140, internal_6f35140, public_6f35140);
extern "C" NAKED register_t __cdecl internal_6f35140()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        call dword ptr ds : [public_6fb35e8]
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_6fb95c0]
        add esp, 0xC
        fnstsw ax
        test ah, 1
        jne public_6f35171
        mov eax, 1
        pop ecx
        ret 
        public_6f35171 : nop
        fld dword ptr ss : [esp]
        fcomp dword ptr ds : [public_6fb95bc]
        fnstsw ax
        test ah, 0x41
        mov eax, 2
        je public_6f3518c
        mov eax, 4
        public_6f3518c : nop
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f35140)
    }
}

#undef public_6f35171
#undef public_6f3518c
