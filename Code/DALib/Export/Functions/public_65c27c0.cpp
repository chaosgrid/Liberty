#include "DALib-PCH.h"


#define public_65c27d1 _public_65c27d1

PROC_DECLARE(0x65c27c0, internal_65c27c0, public_65c27c0);
extern "C" NAKED register_t __cdecl internal_65c27c0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        je public_65c27d1
        mov ecx, dword ptr ds : [eax]
        push 2
        push 0
        push eax
        call dword ptr ds : [ecx+0x18]
        public_65c27d1 : nop
        ret 
        UNREACHABLE_TRAP(0x65c27c0)
    }
}

#undef public_65c27d1
