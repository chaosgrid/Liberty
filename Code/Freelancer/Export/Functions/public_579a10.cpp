#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5798b0);
CLANG_FORWARD_PROC_SYMBOL(public_579a10);

#define public_579a30 _public_579a30

PROC_DECLARE(0x579a10, internal_579a10, public_579a10);
extern "C" NAKED register_t __cdecl internal_579a10()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x380]
        mov edx, dword ptr ds : [ecx+0x35C]
        cmp eax, edx
        jle public_579a30
        sub eax, edx
        push eax
        mov eax, dword ptr ds : [ecx+0x360]
        push eax
        call public_5798b0
        ret 
        public_579a30 : nop
        mov edx, dword ptr ds : [ecx+0x360]
        push 0
        push edx
        call public_5798b0
        ret 
        UNREACHABLE_TRAP(0x579a10)
    }
}

#undef public_579a30
