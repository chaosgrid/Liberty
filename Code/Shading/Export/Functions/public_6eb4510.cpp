#include "Shading-PCH.h"


#define public_6eb451d _public_6eb451d

PROC_DECLARE(0x6eb4510, internal_6eb4510, public_6eb4510);
extern "C" NAKED register_t __cdecl internal_6eb4510()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        jne public_6eb451d
        mov eax, dword ptr ds : [public_6ed4278]
        ret 
        public_6eb451d : nop
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0x50]
        UNREACHABLE_TRAP(0x6eb4510)
    }
}

#undef public_6eb451d
