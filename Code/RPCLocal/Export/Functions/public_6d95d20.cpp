#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d913f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d95d20);

#define public_6d95d31 _public_6d95d31

PROC_DECLARE(0x6d95d20, internal_6d95d20, public_6d95d20);
extern "C" NAKED register_t __cdecl internal_6d95d20()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x20]
        test eax, eax
        je public_6d95d31
        mov ecx, dword ptr ss : [esp+4]
        push eax
        call public_6d913f0
        public_6d95d31 : nop
        ret 4
        UNREACHABLE_TRAP(0x6d95d20)
    }
}

#undef public_6d95d31
