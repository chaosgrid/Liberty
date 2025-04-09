#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_527d10);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_527d08 _public_527d08

PROC_DECLARE(0x527cf0, internal_527cf0, public_527cf0);
extern "C" NAKED register_t __cdecl internal_527cf0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_527d10
        test byte ptr ss : [esp+8], 1
        je public_527d08
        push esi
        call public_5b7e1d
        add esp, 4
        public_527d08 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x527cf0)
    }
}

#undef public_527d08
