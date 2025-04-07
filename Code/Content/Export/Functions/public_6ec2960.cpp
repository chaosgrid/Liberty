#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15b90);

PROC_DECLARE(0x6ec2960, internal_6ec2960, public_6ec2960);
extern "C" NAKED register_t __cdecl internal_6ec2960()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ds:[esi+0x14]
        push eax
        call public_6f15b90
        mov dword ptr ds : [esi+0x48], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ec2960)
    }
}
