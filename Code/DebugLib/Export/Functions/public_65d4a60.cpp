#include "DebugLib-PCH.h"


#define public_65d4a6f _public_65d4a6f
#define public_65d4a86 _public_65d4a86

PROC_DECLARE(0x65d4a60, internal_65d4a60, public_65d4a60);
extern "C" NAKED register_t __cdecl internal_65d4a60()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x54]
        test eax, eax
        jbe public_65d4a6f
        dec eax
        mov dword ptr ds : [ecx+0x54], eax
        public_65d4a6f : nop
        mov eax, dword ptr ds : [ecx+0x54]
        test eax, eax
        jne public_65d4a86
        mov dword ptr ds : [ecx+0x54], 1
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x24]
        xor eax, eax
        public_65d4a86 : nop
        ret 4
        UNREACHABLE_TRAP(0x65d4a60)
    }
}

#undef public_65d4a6f
#undef public_65d4a86
