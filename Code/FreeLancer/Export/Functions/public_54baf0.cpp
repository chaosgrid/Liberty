#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_54bafd _public_54bafd

PROC_DECLARE(0x54baf0, internal_54baf0, public_54baf0);
extern "C" NAKED register_t __cdecl internal_54baf0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_679744]
        test eax, eax
        je public_54bafd
        add eax, 0xFFFFFFF8
        ret 
        public_54bafd : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x54baf0)
    }
}

#undef public_54bafd
