#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2fb70);

#define public_6f2fb78 _public_6f2fb78

PROC_DECLARE(0x6f2fb70, internal_6f2fb70, public_6f2fb70);
extern "C" NAKED register_t __cdecl internal_6f2fb70()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6f2fb78
        ret 
        public_6f2fb78 : nop
        mov ecx, dword ptr ds : [ecx+8]
        sub ecx, eax
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x6f2fb70)
    }
}

#undef public_6f2fb78
