#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d27180);

#define public_6d27198 _public_6d27198
#define public_6d271ab _public_6d271ab

PROC_DECLARE(0x6d27180, internal_6d27180, public_6d27180);
extern "C" NAKED register_t __cdecl internal_6d27180()
{
    __asm
    {
        mov ax, word ptr ss : [esp+4]
        cmp ax, 0x61
        jb public_6d27198
        cmp ax, 0x66
        ja public_6d27198
        movzx eax, ax
        sub eax, 0x57
        ret 
        public_6d27198 : nop
        cmp ax, 0x41
        jb public_6d271ab
        cmp ax, 0x46
        ja public_6d271ab
        movzx eax, ax
        sub eax, 0x37
        ret 
        public_6d271ab : nop
        movzx eax, ax
        sub eax, 0x30
        ret 
        UNREACHABLE_TRAP(0x6d27180)
    }
}

#undef public_6d27198
#undef public_6d271ab
