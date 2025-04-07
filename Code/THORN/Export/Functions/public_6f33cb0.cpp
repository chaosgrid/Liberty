#include "THORN-PCH.h"


#define public_6f33cbf _public_6f33cbf
#define public_6f33cd6 _public_6f33cd6

PROC_DECLARE(0x6f33cb0, internal_6f33cb0, public_6f33cb0);
extern "C" NAKED register_t __cdecl internal_6f33cb0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x3C]
        test eax, eax
        jbe public_6f33cbf
        dec eax
        mov dword ptr ds : [ecx+0x3C], eax
        public_6f33cbf : nop
        mov eax, dword ptr ds : [ecx+0x3C]
        test eax, eax
        jne public_6f33cd6
        mov dword ptr ds : [ecx+0x3C], 1
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x38]
        xor eax, eax
        public_6f33cd6 : nop
        ret 4
        UNREACHABLE_TRAP(0x6f33cb0)
    }
}

#undef public_6f33cbf
#undef public_6f33cd6
