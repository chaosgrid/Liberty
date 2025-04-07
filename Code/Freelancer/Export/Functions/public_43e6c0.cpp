#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dd90);
CLANG_FORWARD_PROC_SYMBOL(public_45a740);
CLANG_FORWARD_PROC_SYMBOL(public_5a0760);

#define public_43e6f1 _public_43e6f1

PROC_DECLARE(0x43e6c0, internal_43e6c0, public_43e6c0);
extern "C" NAKED register_t __cdecl internal_43e6c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_41dd90
        test al, al
        je public_43e6f1
        mov al, byte ptr ds : [esi+0x3BC]
        test al, al
        jne public_43e6f1
        mov al, byte ptr ds : [esi+0x3C4]
        test al, al
        jne public_43e6f1
        call public_45a740
        test al, al
        jne public_43e6f1
        mov ecx, esi
        pop esi
        jmp public_5a0760
        public_43e6f1 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x43e6c0)
    }
}

#undef public_43e6f1
