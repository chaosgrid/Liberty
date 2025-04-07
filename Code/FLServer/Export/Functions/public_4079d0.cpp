#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418c54);

#define public_4079e3 _public_4079e3

PROC_DECLARE(0x4079d0, internal_4079d0, public_4079d0);
extern "C" NAKED register_t __cdecl internal_4079d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_418c54
        cmp eax, 0xFFFFFFFF
        jne public_4079e3
        or eax, eax
        pop esi
        ret 4
        public_4079e3 : nop
        mov eax, dword ptr ds : [esi+0x20]
        push 0
        push 0x7D0
        push 0x2000
        push eax
        call dword ptr ds : [public_41bc18]
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4079d0)
    }
}

#undef public_4079e3
