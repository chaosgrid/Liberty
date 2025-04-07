#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d8547);
CLANG_FORWARD_PROC_SYMBOL(public_65d8573);
CLANG_FORWARD_PROC_SYMBOL(public_65dd1e8);

#define public_65d854e _public_65d854e
#define public_65d8570 _public_65d8570
#define public_65d8572 _public_65d8572

PROC_DECLARE(0x65d8547, internal_65d8547, public_65d8547);
extern "C" NAKED register_t __cdecl internal_65d8547()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0xFFFFFFE0
        ja public_65d8570
        public_65d854e : nop
        push dword ptr ss : [esp+4]
        call public_65d8573
        test eax, eax
        pop ecx
        jne public_65d8572
        cmp dword ptr ss : [esp+8], eax
        je public_65d8572
        push dword ptr ss : [esp+4]
        call public_65dd1e8
        test eax, eax
        pop ecx
        jne public_65d854e
        public_65d8570 : nop
        xor eax, eax
        public_65d8572 : nop
        ret 
        UNREACHABLE_TRAP(0x65d8547)
    }
}

#undef public_65d854e
#undef public_65d8570
#undef public_65d8572
