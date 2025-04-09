#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_552e70);
CLANG_FORWARD_PROC_SYMBOL(public_552ea0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);

#define public_552e9b _public_552e9b

PROC_DECLARE(0x552e70, internal_552e70, public_552e70);
extern "C" NAKED register_t __cdecl internal_552e70()
{
    __asm
    {
        push 0x19
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_552e9b
        push 0x1A
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_552e9b
        mov eax, dword ptr ss : [esp+4]
        push eax
        mov ecx, offset public_679900
        call public_552ea0
        public_552e9b : nop
        ret 
        UNREACHABLE_TRAP(0x552e70)
    }
}

#undef public_552e9b
