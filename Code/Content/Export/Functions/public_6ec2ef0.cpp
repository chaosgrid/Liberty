#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15940);

PROC_DECLARE(0x6ec2ef0, internal_6ec2ef0, public_6ec2ef0);
extern "C" NAKED register_t __cdecl internal_6ec2ef0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ds:[esi+0x40]
        push eax
        call public_6f15940
        mov dword ptr ds : [esi+0x78], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ec2ef0)
    }
}
