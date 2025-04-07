#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6322aa0);

#define public_6322aa8 _public_6322aa8

PROC_DECLARE(0x6322aa0, internal_6322aa0, public_6322aa0);
extern "C" NAKED register_t __cdecl internal_6322aa0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6322aa8
        ret 
        public_6322aa8 : nop
        mov ecx, dword ptr ds : [ecx+8]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x6322aa0)
    }
}

#undef public_6322aa8
