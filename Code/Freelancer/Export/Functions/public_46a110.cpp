#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46a3c0);

#define public_46a139 _public_46a139

PROC_DECLARE(0x46a110, internal_46a110, public_46a110);
extern "C" NAKED register_t __cdecl internal_46a110()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0x5D
        jne public_46a139
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_46a139
        mov al, byte ptr ds : [public_66da88]
        test al, al
        je public_46a139
        push 1
        call public_46a3c0
        add esp, 4
        mov al, 1
        ret 4
        public_46a139 : nop
        xor al, al
        ret 4
        UNREACHABLE_TRAP(0x46a110)
    }
}

#undef public_46a139
