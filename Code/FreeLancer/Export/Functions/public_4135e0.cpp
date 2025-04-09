#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4135e0);

#define public_413607 _public_413607

PROC_DECLARE(0x4135e0, internal_4135e0, public_4135e0);
extern "C" NAKED register_t __cdecl internal_4135e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_616638]
        test eax, eax
        je public_413607
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        mov dword ptr ds : [public_616638], 0
        mov dword ptr ds : [public_61663c], 0
        public_413607 : nop
        ret 
        UNREACHABLE_TRAP(0x4135e0)
    }
}

#undef public_413607
