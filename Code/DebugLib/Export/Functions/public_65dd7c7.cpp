#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dceab);
CLANG_FORWARD_PROC_SYMBOL(public_65dd7c7);

#define public_65dd7db _public_65dd7db

PROC_DECLARE(0x65dd7c7, internal_65dd7c7, public_65dd7c7);
extern "C" NAKED register_t __cdecl internal_65dd7c7()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0x14
        jge public_65dd7db
        add eax, 0x1C
        push eax
        call public_65dceab
        pop ecx
        ret 
        public_65dd7db : nop
        mov eax, dword ptr ss : [esp+8]
        add eax, 0x20
        push eax
        call dword ptr ds : [public_65e10e0]
        ret 
        UNREACHABLE_TRAP(0x65dd7c7)
    }
}

#undef public_65dd7db
