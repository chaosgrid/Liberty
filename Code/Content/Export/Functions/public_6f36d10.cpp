#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f36d10);

#define public_6f36d18 _public_6f36d18

PROC_DECLARE(0x6f36d10, internal_6f36d10, public_6f36d10);
extern "C" NAKED register_t __cdecl internal_6f36d10()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6f36d18
        ret 
        public_6f36d18 : nop
        mov ecx, dword ptr ds : [ecx+8]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x6f36d10)
    }
}

#undef public_6f36d18
