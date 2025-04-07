#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_416490);
CLANG_FORWARD_PROC_SYMBOL(public_418fa0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_418fb8 _public_418fb8

PROC_DECLARE(0x418fa0, internal_418fa0, public_418fa0);
extern "C" NAKED register_t __cdecl internal_418fa0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_416490
        test byte ptr ss : [esp+8], 1
        je public_418fb8
        push esi
        call public_5b7e1d
        add esp, 4
        public_418fb8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x418fa0)
    }
}

#undef public_418fb8
