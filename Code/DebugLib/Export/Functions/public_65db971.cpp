#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65db829);
CLANG_FORWARD_PROC_SYMBOL(public_65db971);
CLANG_FORWARD_PROC_SYMBOL(public_65dbc02);
CLANG_FORWARD_PROC_SYMBOL(public_65dc749);

#define public_65db9ad _public_65db9ad
#define public_65db9b7 _public_65db9b7
#define public_65db9c7 _public_65db9c7
#define public_65db9ca _public_65db9ca

PROC_DECLARE(0x65db971, internal_65db971, public_65db971);
extern "C" NAKED register_t __cdecl internal_65db971()
{
    __asm
    {
        xor eax, eax
        push 0
        cmp dword ptr ss : [esp+8], eax
        push 0x1000
        sete al
        push eax
        call dword ptr ds : [public_65e10c8]
        test eax, eax
        mov dword ptr ds : [public_65e7920], eax
        je public_65db9c7
        call public_65db829
        cmp eax, 3
        mov dword ptr ds : [public_65e7924], eax
        jne public_65db9ad
        push 0x3F8
        call public_65dbc02
        pop ecx
        jmp public_65db9b7
        public_65db9ad : nop
        cmp eax, 2
        jne public_65db9ca
        call public_65dc749
        public_65db9b7 : nop
        test eax, eax
        jne public_65db9ca
        push dword ptr ds : [public_65e7920]
        call dword ptr ds : [public_65e10c4]
        public_65db9c7 : nop
        xor eax, eax
        ret 
        public_65db9ca : nop
        push 1
        pop eax
        ret 
        UNREACHABLE_TRAP(0x65db971)
    }
}

#undef public_65db9ad
#undef public_65db9b7
#undef public_65db9c7
#undef public_65db9ca
