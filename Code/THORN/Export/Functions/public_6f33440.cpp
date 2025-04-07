#include "THORN-PCH.h"


#define public_6f3344f _public_6f3344f
#define public_6f33466 _public_6f33466

PROC_DECLARE(0x6f33440, internal_6f33440, public_6f33440);
extern "C" NAKED register_t __cdecl internal_6f33440()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x28]
        test eax, eax
        jbe public_6f3344f
        dec eax
        mov dword ptr ds : [ecx+0x28], eax
        public_6f3344f : nop
        mov eax, dword ptr ds : [ecx+0x28]
        test eax, eax
        jne public_6f33466
        mov dword ptr ds : [ecx+0x28], 1
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x38]
        xor eax, eax
        public_6f33466 : nop
        ret 4
        UNREACHABLE_TRAP(0x6f33440)
    }
}

#undef public_6f3344f
#undef public_6f33466
