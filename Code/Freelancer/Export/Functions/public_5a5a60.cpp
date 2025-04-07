#include "Freelancer-PCH.h"


#define public_5a5a84 _public_5a5a84

PROC_DECLARE(0x5a5a60, internal_5a5a60, public_5a5a60);
extern "C" NAKED register_t __cdecl internal_5a5a60()
{
    __asm
    {
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_5a5a84
        mov al, byte ptr ds : [public_67ecbf]
        test al, al
        mov dword ptr ds : [public_673344], 0
        je public_5a5a84
        mov byte ptr ds : [public_67ecbe], 1
        public_5a5a84 : nop
        ret 4
        UNREACHABLE_TRAP(0x5a5a60)
    }
}

#undef public_5a5a84
