#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a470);
CLANG_FORWARD_PROC_SYMBOL(public_4c7c80);

#define public_4c7c95 _public_4c7c95

PROC_DECLARE(0x4c7c80, internal_4c7c80, public_4c7c80);
extern "C" NAKED register_t __cdecl internal_4c7c80()
{
    __asm
    {
        call public_45a470
        test al, al
        je public_4c7c95
        mov al, 1
        xor ecx, ecx
        test al, al
        sete cl
        mov al, cl
        ret 
        public_4c7c95 : nop
        mov al, byte ptr ds : [public_67354c]
        test al, al
        sete al
        xor ecx, ecx
        test al, al
        sete cl
        mov al, cl
        ret 
        UNREACHABLE_TRAP(0x4c7c80)
    }
}

#undef public_4c7c95
