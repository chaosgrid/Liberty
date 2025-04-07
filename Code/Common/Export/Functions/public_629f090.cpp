#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629f090);

#define public_629f0a1 _public_629f0a1
#define public_629f0a3 _public_629f0a3

PROC_DECLARE(0x629f090, internal_629f090, public_629f090);
extern "C" NAKED register_t __cdecl internal_629f090()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_629f0a1
        test dword ptr ds : [eax+0x14], 0x1FE3
        jne public_629f0a3
        public_629f0a1 : nop
        xor eax, eax
        public_629f0a3 : nop
        ret 
        UNREACHABLE_TRAP(0x629f090)
    }
}

#undef public_629f0a1
#undef public_629f0a3
