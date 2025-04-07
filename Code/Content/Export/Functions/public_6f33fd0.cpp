#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f33fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f68600);

#define public_6f33fec _public_6f33fec

PROC_DECLARE(0x6f33fd0, internal_6f33fd0, public_6f33fd0);
extern "C" NAKED register_t __cdecl internal_6f33fd0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        test al, al
        mov byte ptr ds : [ecx+0x1B1], al
        je public_6f33fec
        mov dword ptr ss : [esp+4], ecx
        mov ecx, offset public_6fd1bd8
        jmp public_6f68600
        public_6f33fec : nop
        ret 4
        UNREACHABLE_TRAP(0x6f33fd0)
    }
}

#undef public_6f33fec
