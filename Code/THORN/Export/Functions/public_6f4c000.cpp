#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b190);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e930);

#define public_6f4c01b _public_6f4c01b

PROC_DECLARE(0x6f4c000, internal_6f4c000, public_6f4c000);
extern "C" NAKED register_t __cdecl internal_6f4c000()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6f4e930
        add esp, 4
        test eax, eax
        je public_6f4c01b
        push eax
        call public_6f4b190
        add esp, 4
        ret 
        public_6f4c01b : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6f4c000)
    }
}

#undef public_6f4c01b
