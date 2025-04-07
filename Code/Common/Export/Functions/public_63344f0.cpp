#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63344f0);

#define public_6334507 _public_6334507

PROC_DECLARE(0x63344f0, internal_63344f0, public_63344f0);
extern "C" NAKED register_t __cdecl internal_63344f0()
{
    __asm
    {
        mov ax, word ptr ss : [esp+4]
        cmp ax, 3
        jb public_6334507
        cmp ax, 0x21
        jae public_6334507
        mov eax, 1
        ret 
        public_6334507 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x63344f0)
    }
}

#undef public_6334507
