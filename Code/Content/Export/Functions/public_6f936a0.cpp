#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f936a0);

#define public_6f936a8 _public_6f936a8

PROC_DECLARE(0x6f936a0, internal_6f936a0, public_6f936a0);
extern "C" NAKED register_t __cdecl internal_6f936a0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6f936a8
        ret 
        public_6f936a8 : nop
        mov ecx, dword ptr ds : [ecx+8]
        sub ecx, eax
        mov eax, 0x3E0F83E1
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x6f936a0)
    }
}

#undef public_6f936a8
