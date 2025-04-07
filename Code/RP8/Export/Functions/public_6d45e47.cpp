#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4438d);
CLANG_FORWARD_PROC_SYMBOL(public_6d4570a);
CLANG_FORWARD_PROC_SYMBOL(public_6d45e47);

#define public_6d45e69 _public_6d45e69

PROC_DECLARE(0x6d45e47, internal_6d45e47, public_6d45e47);
extern "C" NAKED register_t __cdecl internal_6d45e47()
{
    __asm
    {
        push dword ptr ss : [esp+8]
        push dword ptr ss : [esp+8]
        call public_6d4570a
        test eax, eax
        pop ecx
        pop ecx
        jl public_6d45e69
        mov ecx, dword ptr ss : [esp+4]
        call public_6d4438d
        test eax, eax
        jl public_6d45e69
        xor eax, eax
        public_6d45e69 : nop
        ret 
        UNREACHABLE_TRAP(0x6d45e47)
    }
}

#undef public_6d45e69
