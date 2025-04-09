#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_555f00);
CLANG_FORWARD_PROC_SYMBOL(public_558e90);

#define public_558ec2 _public_558ec2

PROC_DECLARE(0x558e90, internal_558e90, public_558e90);
extern "C" NAKED register_t __cdecl internal_558e90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_679a08]
        sub esp, 8
        push ebx
        xor ebx, ebx
        cmp eax, ebx
        mov byte ptr ds : [public_679a04], bl
        je public_558ec2
        mov dword ptr ss : [esp+4], ebx
        mov dword ptr ss : [esp+8], ebx
        mov byte ptr ds : [eax+0xD], bl
        mov ecx, dword ptr ds : [public_679a08]
        lea eax, ss:[esp+4]
        push eax
        push 2
        call public_555f00
        public_558ec2 : nop
        mov dword ptr ds : [public_679a08], ebx
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x558e90)
    }
}

#undef public_558ec2
