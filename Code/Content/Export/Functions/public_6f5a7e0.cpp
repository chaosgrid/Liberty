#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f5a7e0);

#define public_6f5a7f1 _public_6f5a7f1

PROC_DECLARE(0x6f5a7e0, internal_6f5a7e0, public_6f5a7e0);
extern "C" NAKED register_t __cdecl internal_6f5a7e0()
{
    __asm
    {
        call dword ptr ds : [public_6fb36a0]
        test al, al
        mov al, byte ptr ds : [public_6fce76b]
        jne public_6f5a7f1
        mov al, 1
        public_6f5a7f1 : nop
        ret 
        UNREACHABLE_TRAP(0x6f5a7e0)
    }
}

#undef public_6f5a7f1
