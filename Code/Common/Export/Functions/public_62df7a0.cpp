#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62df7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62df7bc _public_62df7bc

PROC_DECLARE(0x62df7a0, internal_62df7a0, public_62df7a0);
extern "C" NAKED register_t __cdecl internal_62df7a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63fca1c]
        test eax, eax
        je public_62df7bc
        push eax
        call public_6391d5a
        add esp, 4
        mov dword ptr ds : [public_63fca1c], 0
        public_62df7bc : nop
        ret 
        UNREACHABLE_TRAP(0x62df7a0)
    }
}

#undef public_62df7bc
