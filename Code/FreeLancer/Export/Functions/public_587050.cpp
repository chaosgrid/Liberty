#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_587050);

#define public_58705d _public_58705d

PROC_DECLARE(0x587050, internal_587050, public_587050);
extern "C" NAKED register_t __cdecl internal_587050()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x564]
        test edx, edx
        jne public_58705d
        xor eax, eax
        ret 
        public_58705d : nop
        mov eax, dword ptr ds : [ecx+0x568]
        sub eax, edx
        sar eax, 5
        ret 
        UNREACHABLE_TRAP(0x587050)
    }
}

#undef public_58705d
