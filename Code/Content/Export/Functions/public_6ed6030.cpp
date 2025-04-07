#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed5f40);
CLANG_FORWARD_PROC_SYMBOL(public_6ed6030);

#define public_6ed604e _public_6ed604e

PROC_DECLARE(0x6ed6030, internal_6ed6030, public_6ed6030);
extern "C" NAKED register_t __cdecl internal_6ed6030()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6fcf0f8]
        mov al, 1
        test al, cl
        jne public_6ed604e
        or cl, al
        mov byte ptr ds : [public_6fcf0f8], cl
        mov ecx, offset public_6fcf0fc
        jmp public_6ed5f40
        public_6ed604e : nop
        ret 
        UNREACHABLE_TRAP(0x6ed6030)
    }
}

#undef public_6ed604e
