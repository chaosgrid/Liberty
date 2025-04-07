#include "Content-PCH.h"


#define public_6ee1f5c _public_6ee1f5c

PROC_DECLARE(0x6ee1f40, internal_6ee1f40, public_6ee1f40);
extern "C" NAKED register_t __cdecl internal_6ee1f40()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+8]
        test edx, edx
        je public_6ee1f5c
        mov eax, dword ptr ds : [ecx+0xC]
        sub eax, edx
        sar eax, 2
        test eax, eax
        je public_6ee1f5c
        mov ecx, edx
        mov ecx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+8]
        public_6ee1f5c : nop
        ret 
        UNREACHABLE_TRAP(0x6ee1f40)
    }
}

#undef public_6ee1f5c
