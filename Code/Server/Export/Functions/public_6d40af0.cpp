#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d40af0);
CLANG_FORWARD_PROC_SYMBOL(public_6d417d0);

#define public_6d40b0e _public_6d40b0e

PROC_DECLARE(0x6d40af0, internal_6d40af0, public_6d40af0);
extern "C" NAKED register_t __cdecl internal_6d40af0()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6d8f614]
        mov al, 1
        test al, cl
        jne public_6d40b0e
        or cl, al
        mov byte ptr ds : [public_6d8f614], cl
        mov ecx, offset public_6d904c0
        jmp public_6d417d0
        public_6d40b0e : nop
        ret 
        UNREACHABLE_TRAP(0x6d40af0)
    }
}

#undef public_6d40b0e
