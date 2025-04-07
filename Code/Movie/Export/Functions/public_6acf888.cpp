#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acff18);
CLANG_FORWARD_PROC_SYMBOL(public_6ad0953);

#define public_6acf8a9 _public_6acf8a9

PROC_DECLARE(0x6acf888, internal_6acf888, public_6acf888);
extern "C" NAKED register_t __cdecl internal_6acf888()
{
    __asm
    {
        push 0x80
        call public_6ad0953
        test eax, eax
        pop ecx
        mov dword ptr ds : [public_6ae2598], eax
        jne public_6acf8a9
        push 0x18
        call public_6acff18
        mov eax, dword ptr ds : [public_6ae2598]
        pop ecx
        public_6acf8a9 : nop
        and dword ptr ds : [eax], 0
        mov eax, dword ptr ds : [public_6ae2598]
        mov dword ptr ds : [public_6ae2594], eax
        ret 
        UNREACHABLE_TRAP(0x6acf888)
    }
}

#undef public_6acf8a9
