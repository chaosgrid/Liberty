#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c15d0);

#define public_65c1600 _public_65c1600

PROC_DECLARE(0x65c15d0, internal_65c15d0, public_65c15d0);
extern "C" NAKED register_t __cdecl internal_65c15d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x100
        test eax, eax
        je public_65c1600
        lea ecx, ss:[esp+0x108]
        push ecx
        push eax
        lea edx, ss:[esp+8]
        push edx
        call dword ptr ds : [public_65c70a4]
        add esp, 0xC
        lea eax, ss:[esp]
        push eax
        call dword ptr ds : [public_65c7010]
        public_65c1600 : nop
        add esp, 0x100
        ret 
        UNREACHABLE_TRAP(0x65c15d0)
    }
}

#undef public_65c1600
