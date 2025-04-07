#include "SoundStreamer-PCH.h"


#define public_6ef4106 _public_6ef4106

PROC_DECLARE(0x6ef40fa, internal_6ef40fa, public_6ef40fa);
extern "C" NAKED register_t __cdecl internal_6ef40fa()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        jne public_6ef4106
        mov eax, offset public_6efc14c
        public_6ef4106 : nop
        ret 
        UNREACHABLE_TRAP(0x6ef40fa)
    }
}

#undef public_6ef4106
