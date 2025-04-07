#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfc00);

#define public_6ecfc08 _public_6ecfc08

PROC_DECLARE(0x6ecfc00, internal_6ecfc00, public_6ecfc00);
extern "C" NAKED register_t __cdecl internal_6ecfc00()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6ecfc08
        ret 
        public_6ecfc08 : nop
        mov ecx, dword ptr ds : [ecx+8]
        sub ecx, eax
        mov eax, 0x78787879
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x6ecfc00)
    }
}

#undef public_6ecfc08
