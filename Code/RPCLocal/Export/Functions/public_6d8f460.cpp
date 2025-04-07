#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d86150);

#define public_6d8f46f _public_6d8f46f

PROC_DECLARE(0x6d8f460, internal_6d8f460, public_6d8f460);
extern "C" NAKED register_t __cdecl internal_6d8f460()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6dbbd58]
        test ecx, ecx
        je public_6d8f46f
        jmp public_6d86150
        public_6d8f46f : nop
        ret 4
        UNREACHABLE_TRAP(0x6d8f460)
    }
}

#undef public_6d8f46f
