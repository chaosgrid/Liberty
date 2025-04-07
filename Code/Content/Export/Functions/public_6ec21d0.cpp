#include "Content-PCH.h"


#define public_6ec21e4 _public_6ec21e4

PROC_DECLARE(0x6ec21d0, internal_6ec21d0, public_6ec21d0);
extern "C" NAKED register_t __cdecl internal_6ec21d0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        xor al, al
        test edx, edx
        je public_6ec21e4
        mov edx, dword ptr ds : [edx+4]
        test dword ptr ds : [ecx+0xC], edx
        je public_6ec21e4
        mov al, 1
        public_6ec21e4 : nop
        ret 8
        UNREACHABLE_TRAP(0x6ec21d0)
    }
}

#undef public_6ec21e4
