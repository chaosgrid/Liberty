#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62df430);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62df44c _public_62df44c

PROC_DECLARE(0x62df430, internal_62df430, public_62df430);
extern "C" NAKED register_t __cdecl internal_62df430()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63fca1c]
        test eax, eax
        je public_62df44c
        push eax
        call public_6391d5a
        add esp, 4
        mov dword ptr ds : [public_63fca1c], 0
        public_62df44c : nop
        ret 
        UNREACHABLE_TRAP(0x62df430)
    }
}

#undef public_62df44c
