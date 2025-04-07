#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dceab);
CLANG_FORWARD_PROC_SYMBOL(public_65dd798);

#define public_65dd7bc _public_65dd7bc

PROC_DECLARE(0x65dd798, internal_65dd798, public_65dd798);
extern "C" NAKED register_t __cdecl internal_65dd798()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, offset public_65e5738
        cmp eax, ecx
        jb public_65dd7bc
        cmp eax, offset public_65e5998
        ja public_65dd7bc
        sub eax, ecx
        sar eax, 5
        add eax, 0x1C
        push eax
        call public_65dceab
        pop ecx
        ret 
        public_65dd7bc : nop
        add eax, 0x20
        push eax
        call dword ptr ds : [public_65e10e0]
        ret 
        UNREACHABLE_TRAP(0x65dd798)
    }
}

#undef public_65dd7bc
