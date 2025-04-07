#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6316ac0);

#define public_6316aca _public_6316aca

PROC_DECLARE(0x6316ac0, internal_6316ac0, public_6316ac0);
extern "C" NAKED register_t __cdecl internal_6316ac0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_6316aca
        xor eax, eax
        ret 
        public_6316aca : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 4
        ret 
        UNREACHABLE_TRAP(0x6316ac0)
    }
}

#undef public_6316aca
