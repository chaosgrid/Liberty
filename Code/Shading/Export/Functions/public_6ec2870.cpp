#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec0bd0);

#define public_6ec2889 _public_6ec2889

PROC_DECLARE(0x6ec2870, internal_6ec2870, public_6ec2870);
extern "C" NAKED register_t __cdecl internal_6ec2870()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        or eax, 0xFFFFFFFF
        test ecx, ecx
        je public_6ec2889
        push 1
        push ecx
        mov ecx, dword ptr ss : [esp+0xC]
        call public_6ec0bd0
        xor eax, eax
        public_6ec2889 : nop
        ret 8
        UNREACHABLE_TRAP(0x6ec2870)
    }
}

#undef public_6ec2889
