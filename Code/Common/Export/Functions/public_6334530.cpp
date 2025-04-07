#include "Common-PCH.h"


#define public_6334547 _public_6334547

PROC_DECLARE(0x6334530, internal_6334530, public_6334530);
extern "C" NAKED register_t __cdecl internal_6334530()
{
    __asm
    {
        mov ax, word ptr ss : [esp+4]
        cmp ax, 0xFFF0
        jb public_6334547
        cmp ax, 0xFFFF
        jae public_6334547
        mov eax, 1
        ret 
        public_6334547 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6334530)
    }
}

#undef public_6334547
