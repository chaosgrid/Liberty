#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65daa26);
CLANG_FORWARD_PROC_SYMBOL(public_65daa54);
CLANG_FORWARD_PROC_SYMBOL(public_65dceab);
CLANG_FORWARD_PROC_SYMBOL(public_65dcf0c);

#define public_65daa4b _public_65daa4b
#define public_65daa53 _public_65daa53

PROC_DECLARE(0x65daa26, internal_65daa26, public_65daa26);
extern "C" NAKED register_t __cdecl internal_65daa26()
{
    __asm
    {
        cmp dword ptr ds : [public_65e6230], 0
        jne public_65daa53
        push 0xB
        call public_65dceab
        cmp dword ptr ds : [public_65e6230], 0
        pop ecx
        jne public_65daa4b
        call public_65daa54
        inc dword ptr ds : [public_65e6230]
        public_65daa4b : nop
        push 0xB
        call public_65dcf0c
        pop ecx
        public_65daa53 : nop
        ret 
        UNREACHABLE_TRAP(0x65daa26)
    }
}

#undef public_65daa4b
#undef public_65daa53
