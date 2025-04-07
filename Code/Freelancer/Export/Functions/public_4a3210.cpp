#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a3210);

#define public_4a3218 _public_4a3218

PROC_DECLARE(0x4a3210, internal_4a3210, public_4a3210);
extern "C" NAKED register_t __cdecl internal_4a3210()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_4a3218
        ret 
        public_4a3218 : nop
        mov ecx, dword ptr ds : [ecx+8]
        sub ecx, eax
        mov eax, 0x84210843
        imul ecx
        add edx, ecx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x4a3210)
    }
}

#undef public_4a3218
