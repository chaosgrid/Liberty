#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d26172);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);

#define public_6d27ddb _public_6d27ddb
#define public_6d27de3 _public_6d27de3
#define public_6d27dea _public_6d27dea

PROC_DECLARE(0x6d27da0, internal_6d27da0, public_6d27da0);
extern "C" NAKED register_t __cdecl internal_6d27da0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        mov dword ptr ss : [ebp-0xC], ecx
        mov eax, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-8], eax
        mov ecx, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-4], ecx
        cmp dword ptr ss : [ebp-4], 0
        je public_6d27de3
        mov ecx, dword ptr ss : [ebp-4]
        call public_6d26172
        mov edx, 1
        and edx, 1
        test edx, edx
        je public_6d27ddb
        mov eax, dword ptr ss : [ebp-4]
        push eax
        call public_6d2f249
        add esp, 4
        public_6d27ddb : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0x10], ecx
        jmp public_6d27dea
        public_6d27de3 : nop
        mov dword ptr ss : [ebp-0x10], 0
        public_6d27dea : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d27da0)
    }
}

#undef public_6d27ddb
#undef public_6d27de3
#undef public_6d27dea
