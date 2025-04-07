#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad3b18);

#define public_6ad3b1e _public_6ad3b1e
#define public_6ad3b30 _public_6ad3b30

PROC_DECLARE(0x6ad3b18, internal_6ad3b18, public_6ad3b18);
extern "C" NAKED register_t __cdecl internal_6ad3b18()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        xor ecx, ecx
        public_6ad3b1e : nop
        cmp dword ptr ds : [eax], 0
        jne public_6ad3b30
        inc ecx
        add eax, 4
        cmp ecx, 3
        jl public_6ad3b1e
        push 1
        pop eax
        ret 
        public_6ad3b30 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6ad3b18)
    }
}

#undef public_6ad3b1e
#undef public_6ad3b30
