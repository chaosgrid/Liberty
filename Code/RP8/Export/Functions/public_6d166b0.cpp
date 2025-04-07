#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d166b0);

#define public_6d166b3 _public_6d166b3
#define public_6d166d3 _public_6d166d3

PROC_DECLARE(0x6d166b0, internal_6d166b0, public_6d166b0);
extern "C" NAKED register_t __cdecl internal_6d166b0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        public_6d166b3 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        sub eax, 1
        mov dword ptr ss : [ebp+0x10], eax
        cmp dword ptr ss : [ebp+0x10], 0
        jl public_6d166d3
        mov ecx, dword ptr ss : [ebp+8]
        call dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp+8], ecx
        jmp public_6d166b3
        public_6d166d3 : nop
        pop ebp
        ret 0x10
        UNREACHABLE_TRAP(0x6d166b0)
    }
}

#undef public_6d166b3
#undef public_6d166d3
