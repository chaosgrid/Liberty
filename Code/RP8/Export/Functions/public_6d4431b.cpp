#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4431b);
CLANG_FORWARD_PROC_SYMBOL(public_6d48423);

#define public_6d44325 _public_6d44325
#define public_6d4433e _public_6d4433e

PROC_DECLARE(0x6d4431b, internal_6d4431b, public_6d4431b);
extern "C" NAKED register_t __cdecl internal_6d4431b()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0
        jne public_6d44325
        xor eax, eax
        ret 
        public_6d44325 : nop
        push 2
        call public_6d48423
        mov edx, eax
        test edx, edx
        pop ecx
        je public_6d4433e
        push edi
        push 0x10
        pop ecx
        xor eax, eax
        mov edi, edx
        rep stosd
        pop edi
        public_6d4433e : nop
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x6d4431b)
    }
}

#undef public_6d44325
#undef public_6d4433e
