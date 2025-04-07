#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402d30);

#define public_402d4b _public_402d4b

PROC_DECLARE(0x402d30, internal_402d30, public_402d30);
extern "C" NAKED register_t __cdecl internal_402d30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp dword ptr ds : [public_616474], eax
        je public_402d4b
        mov dword ptr ds : [public_616474], eax
        mov dword ptr ds : [public_616498], 0
        public_402d4b : nop
        ret 
        UNREACHABLE_TRAP(0x402d30)
    }
}

#undef public_402d4b
