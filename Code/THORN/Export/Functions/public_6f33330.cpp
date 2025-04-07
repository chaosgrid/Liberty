#include "THORN-PCH.h"


#define public_6f3333f _public_6f3333f
#define public_6f33356 _public_6f33356

PROC_DECLARE(0x6f33330, internal_6f33330, public_6f33330);
extern "C" NAKED register_t __cdecl internal_6f33330()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x28]
        test eax, eax
        jbe public_6f3333f
        dec eax
        mov dword ptr ds : [ecx+0x28], eax
        public_6f3333f : nop
        mov eax, dword ptr ds : [ecx+0x28]
        test eax, eax
        jne public_6f33356
        mov dword ptr ds : [ecx+0x28], 1
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x38]
        xor eax, eax
        public_6f33356 : nop
        ret 4
        UNREACHABLE_TRAP(0x6f33330)
    }
}

#undef public_6f3333f
#undef public_6f33356
