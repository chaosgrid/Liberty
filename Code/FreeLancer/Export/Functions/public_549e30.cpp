#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_549e30);
CLANG_FORWARD_PROC_SYMBOL(public_5763b0);

#define public_549e4a _public_549e4a
#define public_549e68 _public_549e68

PROC_DECLARE(0x549e30, internal_549e30, public_549e30);
extern "C" NAKED register_t __cdecl internal_549e30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_674aa0]
        cmp byte ptr ds : [eax+0x5BA], 1
        jne public_549e4a
        push 0
        push 0x39
        call public_5763b0
        add esp, 8
        public_549e4a : nop
        mov ecx, dword ptr ds : [public_674aa0]
        cmp byte ptr ds : [ecx+0x5B9], 1
        jne public_549e68
        push 0
        push 0xBF
        call public_5763b0
        add esp, 8
        public_549e68 : nop
        ret 
        UNREACHABLE_TRAP(0x549e30)
    }
}

#undef public_549e4a
#undef public_549e68
