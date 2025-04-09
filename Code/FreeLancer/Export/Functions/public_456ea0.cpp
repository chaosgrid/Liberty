#include "FreeLancer-PCH.h"


#define public_456eb1 _public_456eb1

PROC_DECLARE(0x456ea0, internal_456ea0, public_456ea0);
extern "C" NAKED register_t __cdecl internal_456ea0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x77]
        test al, al
        jne public_456eb1
        mov al, byte ptr ds : [ecx+0x76]
        test al, al
        jne public_456eb1
        xor eax, eax
        ret 
        public_456eb1 : nop
        mov eax, 1
        ret 
        UNREACHABLE_TRAP(0x456ea0)
    }
}

#undef public_456eb1
