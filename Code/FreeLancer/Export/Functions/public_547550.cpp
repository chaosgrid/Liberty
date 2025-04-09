#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a890);
CLANG_FORWARD_PROC_SYMBOL(public_45a990);
CLANG_FORWARD_PROC_SYMBOL(public_547550);

#define public_54756e _public_54756e

PROC_DECLARE(0x547550, internal_547550, public_547550);
extern "C" NAKED register_t __cdecl internal_547550()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 1
        sete al
        test al, al
        mov byte ptr ds : [ecx+0xA8], al
        push ecx
        jne public_54756e
        call public_45a990
        add esp, 4
        ret 8
        public_54756e : nop
        call public_45a890
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x547550)
    }
}

#undef public_54756e
