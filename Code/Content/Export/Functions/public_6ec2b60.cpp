#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15b90);

#define public_6ec2b79 _public_6ec2b79
#define public_6ec2b8f _public_6ec2b8f

PROC_DECLARE(0x6ec2b60, internal_6ec2b60, public_6ec2b60);
extern "C" NAKED register_t __cdecl internal_6ec2b60()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        lea eax, ds:[esi+0xC]
        je public_6ec2b79
        mov ecx, dword ptr ds : [esi+4]
        push eax
        call public_6f15b90
        mov dword ptr ds : [esi+0x78], eax
        public_6ec2b79 : nop
        mov ecx, dword ptr ds : [esi+0x40]
        test ecx, ecx
        lea eax, ds:[esi+0x40]
        je public_6ec2b8f
        mov ecx, dword ptr ds : [esi+4]
        push eax
        call public_6f15b90
        mov dword ptr ds : [esi+0x7C], eax
        public_6ec2b8f : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ec2b60)
    }
}

#undef public_6ec2b79
#undef public_6ec2b8f
