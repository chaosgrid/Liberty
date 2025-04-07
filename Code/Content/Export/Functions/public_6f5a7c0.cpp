#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f5a7c0);

#define public_6f5a7d3 _public_6f5a7d3

PROC_DECLARE(0x6f5a7c0, internal_6f5a7c0, public_6f5a7c0);
extern "C" NAKED register_t __cdecl internal_6f5a7c0()
{
    __asm
    {
        call dword ptr ds : [public_6fb36a0]
        test al, al
        je public_6f5a7d3
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [public_6fce76b], al
        public_6f5a7d3 : nop
        ret 
        UNREACHABLE_TRAP(0x6f5a7c0)
    }
}

#undef public_6f5a7d3
