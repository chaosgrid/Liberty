#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7070);

#define public_6eb707c _public_6eb707c

PROC_DECLARE(0x6eb7070, internal_6eb7070, public_6eb7070);
extern "C" NAKED register_t __cdecl internal_6eb7070()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+8]
        test ecx, ecx
        je public_6eb707c
        jmp public_6eb6bb0
        public_6eb707c : nop
        or eax, 0xFFFFFFFF
        ret 
        UNREACHABLE_TRAP(0x6eb7070)
    }
}

#undef public_6eb707c
