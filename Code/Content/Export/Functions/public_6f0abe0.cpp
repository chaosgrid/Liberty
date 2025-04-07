#include "Content-PCH.h"


#define public_6f0abf1 _public_6f0abf1
#define public_6f0abf4 _public_6f0abf4

PROC_DECLARE(0x6f0abe0, internal_6f0abe0, public_6f0abe0);
extern "C" NAKED register_t __cdecl internal_6f0abe0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x14]
        sub eax, 0
        je public_6f0abf4
        dec eax
        je public_6f0abf1
        mov eax, 1
        ret 
        public_6f0abf1 : nop
        xor eax, eax
        ret 
        public_6f0abf4 : nop
        mov eax, 2
        ret 
        UNREACHABLE_TRAP(0x6f0abe0)
    }
}

#undef public_6f0abf1
#undef public_6f0abf4
