#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dcf0c);
CLANG_FORWARD_PROC_SYMBOL(public_65dd819);

#define public_65dd82d _public_65dd82d

PROC_DECLARE(0x65dd819, internal_65dd819, public_65dd819);
extern "C" NAKED register_t __cdecl internal_65dd819()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0x14
        jge public_65dd82d
        add eax, 0x1C
        push eax
        call public_65dcf0c
        pop ecx
        ret 
        public_65dd82d : nop
        mov eax, dword ptr ss : [esp+8]
        add eax, 0x20
        push eax
        call dword ptr ds : [public_65e10ac]
        ret 
        UNREACHABLE_TRAP(0x65dd819)
    }
}

#undef public_65dd82d
