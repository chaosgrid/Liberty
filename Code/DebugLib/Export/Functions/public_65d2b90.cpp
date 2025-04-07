#include "DebugLib-PCH.h"


#define public_65d2b9f _public_65d2b9f
#define public_65d2bb6 _public_65d2bb6

PROC_DECLARE(0x65d2b90, internal_65d2b90, public_65d2b90);
extern "C" NAKED register_t __cdecl internal_65d2b90()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+8]
        test eax, eax
        jbe public_65d2b9f
        dec eax
        mov dword ptr ds : [ecx+8], eax
        public_65d2b9f : nop
        mov eax, dword ptr ds : [ecx+8]
        test eax, eax
        jne public_65d2bb6
        mov dword ptr ds : [ecx+8], 1
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x20]
        xor eax, eax
        public_65d2bb6 : nop
        ret 4
        UNREACHABLE_TRAP(0x65d2b90)
    }
}

#undef public_65d2b9f
#undef public_65d2bb6
