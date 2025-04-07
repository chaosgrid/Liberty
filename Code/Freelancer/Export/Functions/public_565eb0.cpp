#include "Freelancer-PCH.h"


#define public_565ed5 _public_565ed5

PROC_DECLARE(0x565eb0, internal_565eb0, public_565eb0);
extern "C" NAKED register_t __cdecl internal_565eb0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [edx+0x84]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [esi+0x84]
        cmp eax, ecx
        jne public_565ed5
        mov eax, dword ptr ds : [edx+0x88]
        cmp eax, dword ptr ds : [esi+0x88]
        public_565ed5 : nop
        sbb eax, eax
        neg eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x565eb0)
    }
}

#undef public_565ed5
