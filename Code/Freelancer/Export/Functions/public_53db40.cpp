#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_48a180);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_53db5b _public_53db5b

PROC_DECLARE(0x53db40, internal_53db40, public_53db40);
extern "C" NAKED register_t __cdecl internal_53db40()
{
    __asm
    {
        call public_54baf0
        test eax, eax
        je public_53db5b
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        push eax
        push ecx
        call public_48a180
        add esp, 8
        public_53db5b : nop
        ret 0xC
        UNREACHABLE_TRAP(0x53db40)
    }
}

#undef public_53db5b
