#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad0965);
CLANG_FORWARD_PROC_SYMBOL(public_6ad0991);
CLANG_FORWARD_PROC_SYMBOL(public_6ad52bc);

#define public_6ad096c _public_6ad096c
#define public_6ad098e _public_6ad098e
#define public_6ad0990 _public_6ad0990

PROC_DECLARE(0x6ad0965, internal_6ad0965, public_6ad0965);
extern "C" NAKED register_t __cdecl internal_6ad0965()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0xFFFFFFE0
        ja public_6ad098e
        public_6ad096c : nop
        push dword ptr ss : [esp+4]
        call public_6ad0991
        test eax, eax
        pop ecx
        jne public_6ad0990
        cmp dword ptr ss : [esp+8], eax
        je public_6ad0990
        push dword ptr ss : [esp+4]
        call public_6ad52bc
        test eax, eax
        pop ecx
        jne public_6ad096c
        public_6ad098e : nop
        xor eax, eax
        public_6ad0990 : nop
        ret 
        UNREACHABLE_TRAP(0x6ad0965)
    }
}

#undef public_6ad096c
#undef public_6ad098e
#undef public_6ad0990
