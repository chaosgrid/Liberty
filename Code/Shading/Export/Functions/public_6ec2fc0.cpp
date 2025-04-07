#include "Shading-PCH.h"


#define public_6ec2fd4 _public_6ec2fd4

PROC_DECLARE(0x6ec2fc0, internal_6ec2fc0, public_6ec2fc0);
extern "C" NAKED register_t __cdecl internal_6ec2fc0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        or eax, 0xFFFFFFFF
        test ecx, ecx
        je public_6ec2fd4
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6ec2fd4 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6ec2fc0)
    }
}

#undef public_6ec2fd4
