#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4512);
CLANG_FORWARD_PROC_SYMBOL(public_6ef51f4);

#define public_6ef5208 _public_6ef5208

PROC_DECLARE(0x6ef51f4, internal_6ef51f4, public_6ef51f4);
extern "C" NAKED register_t __cdecl internal_6ef51f4()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_6efc2f0
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6ef5208
        push ecx
        call public_6ef4512
        pop ecx
        public_6ef5208 : nop
        ret 
        UNREACHABLE_TRAP(0x6ef51f4)
    }
}

#undef public_6ef5208
