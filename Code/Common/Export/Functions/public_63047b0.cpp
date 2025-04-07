#include "Common-PCH.h"


#define public_63047c0 _public_63047c0

PROC_DECLARE(0x63047b0, internal_63047b0, public_63047b0);
extern "C" NAKED register_t __cdecl internal_63047b0()
{
    __asm
    {
        mov al, byte ptr ds : [public_63ed17c]
        test al, al
        jne public_63047c0
        push ecx
        call dword ptr ds : [public_6399118]
        public_63047c0 : nop
        ret 
        UNREACHABLE_TRAP(0x63047b0)
    }
}

#undef public_63047c0
