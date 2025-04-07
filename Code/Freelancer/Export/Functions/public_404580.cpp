#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_404580);

#define public_40459f _public_40459f
#define public_4045ad _public_4045ad

PROC_DECLARE(0x404580, internal_404580, public_404580);
extern "C" NAKED register_t __cdecl internal_404580()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_4045ad
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        mov dword ptr ds : [ecx+4], eax
        jne public_40459f
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], edx
        inc dword ptr ds : [ecx+8]
        ret 4
        public_40459f : nop
        mov dword ptr ds : [edx], eax
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+4], edx
        inc dword ptr ds : [ecx+8]
        public_4045ad : nop
        ret 4
        UNREACHABLE_TRAP(0x404580)
    }
}

#undef public_40459f
#undef public_4045ad
