#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_548eb0);

#define public_548ec7 _public_548ec7

PROC_DECLARE(0x548eb0, internal_548eb0, public_548eb0);
extern "C" NAKED register_t __cdecl internal_548eb0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        xor eax, eax
        test ecx, 0x3FFFFFFF
        je public_548ec7
        cmp dword ptr ds : [public_679774], ecx
        sete al
        public_548ec7 : nop
        ret 
        UNREACHABLE_TRAP(0x548eb0)
    }
}

#undef public_548ec7
