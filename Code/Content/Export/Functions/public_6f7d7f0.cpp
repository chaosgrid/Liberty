#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f7d7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f7d7fa _public_6f7d7fa

PROC_DECLARE(0x6f7d7f0, internal_6f7d7f0, public_6f7d7f0);
extern "C" NAKED register_t __cdecl internal_6f7d7f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        jge public_6f7d7fa
        xor eax, eax
        public_6f7d7fa : nop
        push eax
        call public_6fa912a
        add esp, 4
        ret 
        UNREACHABLE_TRAP(0x6f7d7f0)
    }
}

#undef public_6f7d7fa
