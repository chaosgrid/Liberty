#include "Shading-PCH.h"


#define public_6ec2ffc _public_6ec2ffc

PROC_DECLARE(0x6ec2fe0, internal_6ec2fe0, public_6ec2fe0);
extern "C" NAKED register_t __cdecl internal_6ec2fe0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0xC]
        or eax, 0xFFFFFFFF
        test edx, edx
        mov dword ptr ds : [ecx], 0
        je public_6ec2ffc
        mov eax, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        public_6ec2ffc : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6ec2fe0)
    }
}

#undef public_6ec2ffc
