#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef9720);

#define public_6ef9726 _public_6ef9726
#define public_6ef9738 _public_6ef9738

PROC_DECLARE(0x6ef9720, internal_6ef9720, public_6ef9720);
extern "C" NAKED register_t __cdecl internal_6ef9720()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        xor ecx, ecx
        public_6ef9726 : nop
        cmp dword ptr ds : [eax], 0
        jne public_6ef9738
        inc ecx
        add eax, 4
        cmp ecx, 3
        jl public_6ef9726
        push 1
        pop eax
        ret 
        public_6ef9738 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6ef9720)
    }
}

#undef public_6ef9726
#undef public_6ef9738
