#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6712610);
CLANG_FORWARD_PROC_SYMBOL(public_6712850);

#define public_6712862 _public_6712862

PROC_DECLARE(0x6712850, internal_6712850, public_6712850);
extern "C" NAKED register_t __cdecl internal_6712850()
{
    __asm
    {
        mov byte ptr ds : [ecx+0x7C], 0
        add ecx, 4
        test ecx, ecx
        je public_6712862
        push 0
        call public_6712610
        public_6712862 : nop
        ret 
        UNREACHABLE_TRAP(0x6712850)
    }
}

#undef public_6712862
