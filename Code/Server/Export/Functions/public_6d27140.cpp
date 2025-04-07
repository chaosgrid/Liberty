#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d27140);

#define public_6d27151 _public_6d27151
#define public_6d2715d _public_6d2715d
#define public_6d27169 _public_6d27169
#define public_6d2716f _public_6d2716f

PROC_DECLARE(0x6d27140, internal_6d27140, public_6d27140);
extern "C" NAKED register_t __cdecl internal_6d27140()
{
    __asm
    {
        mov ax, word ptr ss : [esp+4]
        cmp ax, 0x30
        jb public_6d27151
        cmp ax, 0x39
        jbe public_6d27169
        public_6d27151 : nop
        cmp ax, 0x61
        jb public_6d2715d
        cmp ax, 0x66
        jbe public_6d27169
        public_6d2715d : nop
        cmp ax, 0x41
        jb public_6d2716f
        cmp ax, 0x46
        ja public_6d2716f
        public_6d27169 : nop
        mov eax, 1
        ret 
        public_6d2716f : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6d27140)
    }
}

#undef public_6d27151
#undef public_6d2715d
#undef public_6d27169
#undef public_6d2716f
