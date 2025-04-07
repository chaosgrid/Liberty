#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2fbe0);

#define public_6f2fbe8 _public_6f2fbe8

PROC_DECLARE(0x6f2fbe0, internal_6f2fbe0, public_6f2fbe0);
extern "C" NAKED register_t __cdecl internal_6f2fbe0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6f2fbe8
        ret 
        public_6f2fbe8 : nop
        mov ecx, dword ptr ds : [ecx+8]
        sub ecx, eax
        mov eax, 0xB21642C9
        imul ecx
        add edx, ecx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x6f2fbe0)
    }
}

#undef public_6f2fbe8
