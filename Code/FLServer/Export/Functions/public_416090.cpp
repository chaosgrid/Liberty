#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4160b0);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_4160a8 _public_4160a8

PROC_DECLARE(0x416090, internal_416090, public_416090);
extern "C" NAKED register_t __cdecl internal_416090()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4160b0
        test byte ptr ss : [esp+8], 1
        je public_4160a8
        push esi
        call public_418978
        add esp, 4
        public_4160a8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x416090)
    }
}

#undef public_4160a8
