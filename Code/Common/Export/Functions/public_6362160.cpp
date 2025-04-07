#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6362060);

#define public_636217b _public_636217b

PROC_DECLARE(0x6362160, internal_6362160, public_6362160);
extern "C" NAKED register_t __cdecl internal_6362160()
{
    __asm
    {
        fld dword ptr ds : [ecx-4]
        fcomp dword ptr ds : [ecx+4]
        fnstsw ax
        test ah, 0x40
        jne public_636217b
        mov eax, dword ptr ds : [ecx-4]
        mov dword ptr ds : [ecx+4], eax
        add ecx, 0xFFFFFFE0
        jmp public_6362060
        public_636217b : nop
        ret 
        UNREACHABLE_TRAP(0x6362160)
    }
}

#undef public_636217b
