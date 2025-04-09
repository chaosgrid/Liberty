#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428de0);

#define public_428dfc _public_428dfc

PROC_DECLARE(0x428de0, internal_428de0, public_428de0);
extern "C" NAKED register_t __cdecl internal_428de0()
{
    __asm
    {
        dec dword ptr ds : [public_667ca8]
        jne public_428dfc
        mov eax, dword ptr ds : [public_6108ec]
        mov dword ptr ds : [public_667ca0], 0
        mov dword ptr ds : [public_610904], eax
        public_428dfc : nop
        ret 
        UNREACHABLE_TRAP(0x428de0)
    }
}

#undef public_428dfc
