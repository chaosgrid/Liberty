#include "THORN-PCH.h"


#define public_6f3362f _public_6f3362f
#define public_6f33646 _public_6f33646

PROC_DECLARE(0x6f33620, internal_6f33620, public_6f33620);
extern "C" NAKED register_t __cdecl internal_6f33620()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x28]
        test eax, eax
        jbe public_6f3362f
        dec eax
        mov dword ptr ds : [ecx+0x28], eax
        public_6f3362f : nop
        mov eax, dword ptr ds : [ecx+0x28]
        test eax, eax
        jne public_6f33646
        mov dword ptr ds : [ecx+0x28], 1
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x38]
        xor eax, eax
        public_6f33646 : nop
        ret 4
        UNREACHABLE_TRAP(0x6f33620)
    }
}

#undef public_6f3362f
#undef public_6f33646
