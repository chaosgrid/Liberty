#include "Freelancer-PCH.h"


#define public_4a70c1 _public_4a70c1

PROC_DECLARE(0x4a70a0, internal_4a70a0, public_4a70a0);
extern "C" NAKED register_t __cdecl internal_4a70a0()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0x3006
        jne public_4a70c1
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+0xC]
        push edx
        push 0x3006
        call dword ptr ds : [eax+0xA8]
        public_4a70c1 : nop
        xor al, al
        ret 0xC
        UNREACHABLE_TRAP(0x4a70a0)
    }
}

#undef public_4a70c1
