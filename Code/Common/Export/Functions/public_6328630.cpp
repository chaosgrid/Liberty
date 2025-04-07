#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6328645 _public_6328645

PROC_DECLARE(0x6328630, internal_6328630, public_6328630);
extern "C" NAKED register_t __cdecl internal_6328630()
{
    __asm
    {
        push 4
        call public_6391d9c
        add esp, 4
        test eax, eax
        je public_6328645
        mov dword ptr ds : [eax], offset public_63a3edc
        ret 
        public_6328645 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6328630)
    }
}

#undef public_6328645
