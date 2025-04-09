#include "Freelancer-PCH.h"


#define public_42b922 _public_42b922
#define public_42b92f _public_42b92f

PROC_DECLARE(0x42b910, internal_42b910, public_42b910);
extern "C" NAKED register_t __cdecl internal_42b910()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x30]
        cmp eax, esi
        jne public_42b922
        movsx eax, word ptr ds : [esi+0x2A]
        pop esi
        ret 
        public_42b922 : nop
        mov ecx, dword ptr ds : [esi+0x24]
        test ecx, ecx
        je public_42b92f
        mov edx, dword ptr ds : [ecx]
        pop esi
        jmp dword ptr ds : [edx+0x14]
        public_42b92f : nop
        movsx eax, word ptr ds : [esi+0x28]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x42b910)
    }
}

#undef public_42b922
#undef public_42b92f
