#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15940);

#define public_6ec2009 _public_6ec2009

PROC_DECLARE(0x6ec1ff0, internal_6ec1ff0, public_6ec1ff0);
extern "C" NAKED register_t __cdecl internal_6ec1ff0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        lea eax, ds:[esi+0x10]
        je public_6ec2009
        mov ecx, dword ptr ds : [esi+4]
        push eax
        call public_6f15940
        mov dword ptr ds : [esi+0x48], eax
        public_6ec2009 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ec1ff0)
    }
}

#undef public_6ec2009
