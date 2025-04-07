#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6334510);

#define public_6334527 _public_6334527

PROC_DECLARE(0x6334510, internal_6334510, public_6334510);
extern "C" NAKED register_t __cdecl internal_6334510()
{
    __asm
    {
        mov ax, word ptr ss : [esp+4]
        cmp ax, 0x21
        jb public_6334527
        cmp ax, 0xFFFF
        jae public_6334527
        mov eax, 1
        ret 
        public_6334527 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6334510)
    }
}

#undef public_6334527
