#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_63298c5 _public_63298c5

PROC_DECLARE(0x63298b0, internal_63298b0, public_63298b0);
extern "C" NAKED register_t __cdecl internal_63298b0()
{
    __asm
    {
        push 4
        call public_6391d9c
        add esp, 4
        test eax, eax
        je public_63298c5
        mov dword ptr ds : [eax], offset public_63a4294
        ret 
        public_63298c5 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x63298b0)
    }
}

#undef public_63298c5
