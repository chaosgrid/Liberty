#include "Server-PCH.h"


#define public_6d2968b _public_6d2968b
#define public_6d29690 _public_6d29690

PROC_DECLARE(0x6d29670, internal_6d29670, public_6d29670);
extern "C" NAKED register_t __cdecl internal_6d29670()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax]
        mov cx, word ptr ds : [eax]
        test cx, cx
        je public_6d29690
        cmp cx, 0xA
        jne public_6d2968b
        cmp word ptr ds : [eax+2], 0
        je public_6d29690
        public_6d2968b : nop
        xor eax, eax
        ret 8
        public_6d29690 : nop
        mov eax, 1
        ret 8
        UNREACHABLE_TRAP(0x6d29670)
    }
}

#undef public_6d2968b
#undef public_6d29690
