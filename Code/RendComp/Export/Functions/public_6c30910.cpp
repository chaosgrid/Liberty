#include "RendComp-PCH.h"


#define public_6c3091c _public_6c3091c

PROC_DECLARE(0x6c30910, internal_6c30910, public_6c30910);
extern "C" NAKED register_t __cdecl internal_6c30910()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x18]
        xor eax, eax
        test ecx, ecx
        je public_6c3091c
        mov eax, dword ptr ds : [ecx+0x34]
        public_6c3091c : nop
        ret 
        UNREACHABLE_TRAP(0x6c30910)
    }
}

#undef public_6c3091c
