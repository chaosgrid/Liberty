#include "DALib-PCH.h"


#define public_65c4e43 _public_65c4e43

PROC_DECLARE(0x65c4e30, internal_65c4e30, public_65c4e30);
extern "C" NAKED register_t __cdecl internal_65c4e30()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        je public_65c4e43
        mov edx, dword ptr ds : [eax]
        push 0
        add ecx, 8
        push ecx
        push eax
        call dword ptr ds : [edx+0x30]
        public_65c4e43 : nop
        ret 
        UNREACHABLE_TRAP(0x65c4e30)
    }
}

#undef public_65c4e43
