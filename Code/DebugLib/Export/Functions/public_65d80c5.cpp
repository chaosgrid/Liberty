#include "DebugLib-PCH.h"


#define public_65d80d1 _public_65d80d1

PROC_DECLARE(0x65d80c5, internal_65d80c5, public_65d80c5);
extern "C" NAKED register_t __cdecl internal_65d80c5()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_65d80d1
        mov eax, offset public_65e15e4
        public_65d80d1 : nop
        ret 
        UNREACHABLE_TRAP(0x65d80c5)
    }
}

#undef public_65d80d1
