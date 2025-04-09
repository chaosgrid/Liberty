#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_565800);

#define public_565818 _public_565818
#define public_565822 _public_565822

PROC_DECLARE(0x565800, internal_565800, public_565800);
extern "C" NAKED register_t __cdecl internal_565800()
{
    __asm
    {
        mov dl, byte ptr ds : [ecx+2]
        and dl, 7
        xor eax, eax
        cmp dl, 1
        jne public_565818
        movsx eax, word ptr ds : [ecx+5]
        movsx ecx, word ptr ds : [ecx+3]
        add eax, ecx
        ret 
        public_565818 : nop
        cmp dl, 3
        jne public_565822
        mov eax, 0x100
        public_565822 : nop
        ret 
        UNREACHABLE_TRAP(0x565800)
    }
}

#undef public_565818
#undef public_565822
