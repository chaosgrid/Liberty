#include "Content-PCH.h"


#define public_6ebf769 _public_6ebf769
#define public_6ebf76b _public_6ebf76b

PROC_DECLARE(0x6ebf750, internal_6ebf750, public_6ebf750);
extern "C" NAKED register_t __cdecl internal_6ebf750()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        xor al, al
        test edx, edx
        je public_6ebf76b
        mov ecx, dword ptr ds : [ecx+0xC]
        test ecx, 0x3FFFFFFF
        je public_6ebf769
        cmp dword ptr ds : [edx], ecx
        jne public_6ebf76b
        public_6ebf769 : nop
        mov al, 1
        public_6ebf76b : nop
        ret 8
        UNREACHABLE_TRAP(0x6ebf750)
    }
}

#undef public_6ebf769
#undef public_6ebf76b
