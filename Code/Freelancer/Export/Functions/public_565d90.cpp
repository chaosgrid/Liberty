#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_565d90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_565dac _public_565dac

PROC_DECLARE(0x565d90, internal_565d90, public_565d90);
extern "C" NAKED register_t __cdecl internal_565d90()
{
    __asm
    {
        push 0x18
        call public_5b7e84
        add esp, 4
        test eax, eax
        je public_565dac
        mov dword ptr ds : [eax+0x14], 0
        mov dword ptr ds : [eax], offset public_5e2718
        ret 
        public_565dac : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x565d90)
    }
}

#undef public_565dac
