#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15b90);

#define public_6ec2378 _public_6ec2378

PROC_DECLARE(0x6ec2350, internal_6ec2350, public_6ec2350);
extern "C" NAKED register_t __cdecl internal_6ec2350()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ds:[esi+0xC]
        push eax
        call public_6f15b90
        mov ecx, dword ptr ds : [esi+0x40]
        test ecx, ecx
        mov dword ptr ds : [esi+0x78], eax
        lea eax, ds:[esi+0x40]
        je public_6ec2378
        mov ecx, dword ptr ds : [esi+4]
        push eax
        call public_6f15b90
        mov dword ptr ds : [esi+0x7C], eax
        public_6ec2378 : nop
        mov dword ptr ds : [esi+0x80], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ec2350)
    }
}

#undef public_6ec2378
