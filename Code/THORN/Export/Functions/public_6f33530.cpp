#include "THORN-PCH.h"


#define public_6f3353f _public_6f3353f
#define public_6f33556 _public_6f33556

PROC_DECLARE(0x6f33530, internal_6f33530, public_6f33530);
extern "C" NAKED register_t __cdecl internal_6f33530()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x28]
        test eax, eax
        jbe public_6f3353f
        dec eax
        mov dword ptr ds : [ecx+0x28], eax
        public_6f3353f : nop
        mov eax, dword ptr ds : [ecx+0x28]
        test eax, eax
        jne public_6f33556
        mov dword ptr ds : [ecx+0x28], 1
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x38]
        xor eax, eax
        public_6f33556 : nop
        ret 4
        UNREACHABLE_TRAP(0x6f33530)
    }
}

#undef public_6f3353f
#undef public_6f33556
