#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58fa90);

#define public_58fa98 _public_58fa98

PROC_DECLARE(0x58fa90, internal_58fa90, public_58fa90);
extern "C" NAKED register_t __cdecl internal_58fa90()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_58fa98
        ret 
        public_58fa98 : nop
        mov ecx, dword ptr ds : [ecx+8]
        sub ecx, eax
        mov eax, 0x51EB851F
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x58fa90)
    }
}

#undef public_58fa98
