#include "SoundStreamer-PCH.h"


#define public_6ef51f3 _public_6ef51f3

PROC_DECLARE(0x6ef51e7, internal_6ef51e7, public_6ef51e7);
extern "C" NAKED register_t __cdecl internal_6ef51e7()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6ef51f3
        mov eax, offset public_6efc2d8
        public_6ef51f3 : nop
        ret 
        UNREACHABLE_TRAP(0x6ef51e7)
    }
}

#undef public_6ef51f3
