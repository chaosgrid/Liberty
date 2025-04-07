#include "Content-PCH.h"


#define public_6ec2d73 _public_6ec2d73

PROC_DECLARE(0x6ec2d60, internal_6ec2d60, public_6ec2d60);
extern "C" NAKED register_t __cdecl internal_6ec2d60()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        xor al, al
        test edx, edx
        je public_6ec2d73
        mov edx, dword ptr ds : [edx]
        cmp edx, dword ptr ds : [ecx+0x40]
        jne public_6ec2d73
        mov al, 1
        public_6ec2d73 : nop
        ret 8
        UNREACHABLE_TRAP(0x6ec2d60)
    }
}

#undef public_6ec2d73
