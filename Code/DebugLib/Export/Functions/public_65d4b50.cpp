#include "DebugLib-PCH.h"


#define public_65d4b5f _public_65d4b5f
#define public_65d4b76 _public_65d4b76

PROC_DECLARE(0x65d4b50, internal_65d4b50, public_65d4b50);
extern "C" NAKED register_t __cdecl internal_65d4b50()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x14]
        test eax, eax
        jbe public_65d4b5f
        dec eax
        mov dword ptr ds : [ecx+0x14], eax
        public_65d4b5f : nop
        mov eax, dword ptr ds : [ecx+0x14]
        test eax, eax
        jne public_65d4b76
        mov dword ptr ds : [ecx+0x14], 1
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x18]
        xor eax, eax
        public_65d4b76 : nop
        ret 4
        UNREACHABLE_TRAP(0x65d4b50)
    }
}

#undef public_65d4b5f
#undef public_65d4b76
