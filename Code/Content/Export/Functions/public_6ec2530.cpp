#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15b90);

#define public_6ec2549 _public_6ec2549

PROC_DECLARE(0x6ec2530, internal_6ec2530, public_6ec2530);
extern "C" NAKED register_t __cdecl internal_6ec2530()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        lea eax, ds:[esi+0x10]
        je public_6ec2549
        mov ecx, dword ptr ds : [esi+4]
        push eax
        call public_6f15b90
        mov dword ptr ds : [esi+0x48], eax
        public_6ec2549 : nop
        mov dword ptr ds : [esi+0x4C], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ec2530)
    }
}

#undef public_6ec2549
