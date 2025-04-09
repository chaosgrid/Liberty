#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4104c0);

#define public_4104cb _public_4104cb
#define public_4104d7 _public_4104d7

PROC_DECLARE(0x4104c0, internal_4104c0, public_4104c0);
extern "C" NAKED register_t __cdecl internal_4104c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        jge public_4104cb
        xor eax, eax
        ret 
        public_4104cb : nop
        cmp eax, 0xFF
        jle public_4104d7
        mov eax, 0xFF
        public_4104d7 : nop
        ret 
        UNREACHABLE_TRAP(0x4104c0)
    }
}

#undef public_4104cb
#undef public_4104d7
