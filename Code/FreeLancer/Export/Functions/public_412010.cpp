#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_412010);

#define public_412029 _public_412029

PROC_DECLARE(0x412010, internal_412010, public_412010);
extern "C" NAKED register_t __cdecl internal_412010()
{
    __asm
    {
        fld dword ptr ds : [public_6105a8]
        fcomp qword ptr ds : [public_5c8b68]
        fnstsw ax
        test ah, 1
        jne public_412029
        mov eax, 1
        ret 
        public_412029 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x412010)
    }
}

#undef public_412029
