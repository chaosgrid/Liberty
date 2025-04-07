#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65ddec1);
CLANG_FORWARD_PROC_SYMBOL(public_65de299);

#define public_65de2b4 _public_65de2b4

PROC_DECLARE(0x65de299, internal_65de299, public_65de299);
extern "C" NAKED register_t __cdecl internal_65de299()
{
    __asm
    {
        cmp dword ptr ds : [public_65e7a48], 0
        jne public_65de2b4
        push 0xFFFFFFFD
        call public_65ddec1
        pop ecx
        mov dword ptr ds : [public_65e7a48], 1
        public_65de2b4 : nop
        ret 
        UNREACHABLE_TRAP(0x65de299)
    }
}

#undef public_65de2b4
