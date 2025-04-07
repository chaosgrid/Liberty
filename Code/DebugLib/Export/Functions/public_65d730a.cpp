#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7280);
CLANG_FORWARD_PROC_SYMBOL(public_65d730a);

#define public_65d732c _public_65d732c

PROC_DECLARE(0x65d730a, internal_65d730a, public_65d730a);
extern "C" NAKED register_t __cdecl internal_65d730a()
{
    __asm
    {
        xor eax, eax
        mov ecx, dword ptr fs : [0]
        cmp dword ptr ds : [ecx+4], offset _public_65d7280
        jne public_65d732c
        mov edx, dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ds : [edx+0xC]
        cmp dword ptr ds : [ecx+8], edx
        jne public_65d732c
        mov eax, 1
        public_65d732c : nop
        ret 
        UNREACHABLE_TRAP(0x65d730a)
    }
}

#undef public_65d732c
