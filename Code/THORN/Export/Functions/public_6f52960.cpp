#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52960);
CLANG_FORWARD_PROC_SYMBOL(public_6f52990);
CLANG_FORWARD_PROC_SYMBOL(public_6f529b0);

#define public_6f52972 _public_6f52972
#define public_6f52987 _public_6f52987

PROC_DECLARE(0x6f52960, internal_6f52960, public_6f52960);
extern "C" NAKED register_t __cdecl internal_6f52960()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push esi
        call public_6f529b0
        add esp, 4
        test eax, eax
        je public_6f52987
        public_6f52972 : nop
        push 0x3B
        push esi
        call public_6f52990
        push esi
        call public_6f529b0
        add esp, 0xC
        test eax, eax
        jne public_6f52972
        public_6f52987 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f52960)
    }
}

#undef public_6f52972
#undef public_6f52987
