#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4507);
CLANG_FORWARD_PROC_SYMBOL(public_6ef51d1);

#define public_6ef51e6 _public_6ef51e6

PROC_DECLARE(0x6ef51d1, internal_6ef51d1, public_6ef51d1);
extern "C" NAKED register_t __cdecl internal_6ef51d1()
{
    __asm
    {
        cmp dword ptr ds : [ecx+8], 0
        mov dword ptr ds : [ecx], offset public_6efc2d0
        je public_6ef51e6
        push dword ptr ds : [ecx+4]
        call public_6ef4507
        pop ecx
        public_6ef51e6 : nop
        ret 
        UNREACHABLE_TRAP(0x6ef51d1)
    }
}

#undef public_6ef51e6
