#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d8c0e);

#define public_65d8c35 _public_65d8c35

PROC_DECLARE(0x65d8c0e, internal_65d8c0e, public_65d8c0e);
extern "C" NAKED register_t __cdecl internal_65d8c0e()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        cmp dword ptr ds : [eax], 0xE06D7363
        jne public_65d8c35
        cmp dword ptr ds : [eax+0x10], 3
        jne public_65d8c35
        cmp dword ptr ds : [eax+0x14], 0x19930520
        jne public_65d8c35
        cmp dword ptr ds : [eax+0x1C], 0
        jne public_65d8c35
        push 1
        pop eax
        ret 
        public_65d8c35 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x65d8c0e)
    }
}

#undef public_65d8c35
