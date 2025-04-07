#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4d70);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4dfa);

#define public_6ef4e1c _public_6ef4e1c

PROC_DECLARE(0x6ef4dfa, internal_6ef4dfa, public_6ef4dfa);
extern "C" NAKED register_t __cdecl internal_6ef4dfa()
{
    __asm
    {
        xor eax, eax
        mov ecx, dword ptr fs : [0]
        cmp dword ptr ds : [ecx+4], offset _public_6ef4d70
        jne public_6ef4e1c
        mov edx, dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ds : [edx+0xC]
        cmp dword ptr ds : [ecx+8], edx
        jne public_6ef4e1c
        mov eax, 1
        public_6ef4e1c : nop
        ret 
        UNREACHABLE_TRAP(0x6ef4dfa)
    }
}

#undef public_6ef4e1c
