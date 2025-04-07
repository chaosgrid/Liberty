#include "DebugLib-PCH.h"


#define public_65d6d8d _public_65d6d8d

PROC_DECLARE(0x65d6d81, internal_65d6d81, public_65d6d81);
extern "C" NAKED register_t __cdecl internal_65d6d81()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        jne public_65d6d8d
        mov eax, offset public_65e13a4
        public_65d6d8d : nop
        ret 
        UNREACHABLE_TRAP(0x65d6d81)
    }
}

#undef public_65d6d8d
