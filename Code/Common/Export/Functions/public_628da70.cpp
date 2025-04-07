#include "Common-PCH.h"


#define public_628da83 _public_628da83

PROC_DECLARE(0x628da70, internal_628da70, public_628da70);
extern "C" NAKED register_t __cdecl internal_628da70()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_628da83
        xor eax, eax
        xor ecx, ecx
        test eax, eax
        sete cl
        mov al, cl
        ret 
        public_628da83 : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 2
        xor ecx, ecx
        test eax, eax
        sete cl
        mov al, cl
        ret 
        UNREACHABLE_TRAP(0x628da70)
    }
}

#undef public_628da83
