#include "THORN-PCH.h"


#define public_6f3380f _public_6f3380f
#define public_6f33826 _public_6f33826

PROC_DECLARE(0x6f33800, internal_6f33800, public_6f33800);
extern "C" NAKED register_t __cdecl internal_6f33800()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x3C]
        test eax, eax
        jbe public_6f3380f
        dec eax
        mov dword ptr ds : [ecx+0x3C], eax
        public_6f3380f : nop
        mov eax, dword ptr ds : [ecx+0x3C]
        test eax, eax
        jne public_6f33826
        mov dword ptr ds : [ecx+0x3C], 1
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x38]
        xor eax, eax
        public_6f33826 : nop
        ret 4
        UNREACHABLE_TRAP(0x6f33800)
    }
}

#undef public_6f3380f
#undef public_6f33826
