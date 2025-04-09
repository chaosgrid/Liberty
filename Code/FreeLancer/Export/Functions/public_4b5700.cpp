#include "FreeLancer-PCH.h"


#define public_4b5713 _public_4b5713

PROC_DECLARE(0x4b5700, internal_4b5700, public_4b5700);
extern "C" NAKED register_t __cdecl internal_4b5700()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0xEF02
        jne public_4b5713
        and byte ptr ds : [ecx+0x6C], 0xFD
        mov al, 1
        ret 0xC
        public_4b5713 : nop
        xor al, al
        ret 0xC
        UNREACHABLE_TRAP(0x4b5700)
    }
}

#undef public_4b5713
