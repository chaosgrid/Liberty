#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb1630);

#define public_6eb163f _public_6eb163f
#define public_6eb164a _public_6eb164a

PROC_DECLARE(0x6eb1630, internal_6eb1630, public_6eb1630);
extern "C" NAKED register_t __cdecl internal_6eb1630()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub eax, 0
        je public_6eb164a
        dec eax
        je public_6eb163f
        xor eax, eax
        ret 
        public_6eb163f : nop
        mov eax, dword ptr ss : [esp+4]
        shr eax, 2
        and eax, 3
        ret 
        public_6eb164a : nop
        mov eax, dword ptr ss : [esp+4]
        and eax, 3
        ret 
        UNREACHABLE_TRAP(0x6eb1630)
    }
}

#undef public_6eb163f
#undef public_6eb164a
