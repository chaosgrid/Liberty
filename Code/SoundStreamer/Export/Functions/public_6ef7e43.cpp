#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef7e43);

#define public_6ef7e6a _public_6ef7e6a

PROC_DECLARE(0x6ef7e43, internal_6ef7e43, public_6ef7e43);
extern "C" NAKED register_t __cdecl internal_6ef7e43()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        cmp dword ptr ds : [eax], 0xE06D7363
        jne public_6ef7e6a
        cmp dword ptr ds : [eax+0x10], 3
        jne public_6ef7e6a
        cmp dword ptr ds : [eax+0x14], 0x19930520
        jne public_6ef7e6a
        cmp dword ptr ds : [eax+0x1C], 0
        jne public_6ef7e6a
        push 1
        pop eax
        ret 
        public_6ef7e6a : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6ef7e43)
    }
}

#undef public_6ef7e6a
