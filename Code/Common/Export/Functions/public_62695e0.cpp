#include "Common-PCH.h"


#define public_62695f3 _public_62695f3

PROC_DECLARE(0x62695e0, internal_62695e0, public_62695e0);
extern "C" NAKED register_t __cdecl internal_62695e0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_62695f3
        xor eax, eax
        xor ecx, ecx
        test eax, eax
        sete cl
        mov al, cl
        ret 
        public_62695f3 : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 5
        xor ecx, ecx
        test eax, eax
        sete cl
        mov al, cl
        ret 
        UNREACHABLE_TRAP(0x62695e0)
    }
}

#undef public_62695f3
