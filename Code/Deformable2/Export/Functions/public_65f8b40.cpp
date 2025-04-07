#include "Deformable2-PCH.h"


#define public_65f8b50 _public_65f8b50
#define public_65f8b58 _public_65f8b58

PROC_DECLARE(0x65f8b40, internal_65f8b40, public_65f8b40);
extern "C" NAKED register_t __cdecl internal_65f8b40()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x18]
        xor eax, eax
        test edx, edx
        jle public_65f8b58
        mov ecx, dword ptr ds : [ecx+0x1C]
        add ecx, 0x1C
        nop 
        public_65f8b50 : nop
        add eax, dword ptr ds : [ecx]
        add ecx, 0x24
        dec edx
        jne public_65f8b50
        public_65f8b58 : nop
        ret 
        UNREACHABLE_TRAP(0x65f8b40)
    }
}

#undef public_65f8b50
#undef public_65f8b58
