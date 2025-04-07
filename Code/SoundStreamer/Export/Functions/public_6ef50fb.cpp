#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef50fb);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8c0e);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8c47);

#define public_6ef5112 _public_6ef5112
#define public_6ef5117 _public_6ef5117

PROC_DECLARE(0x6ef50fb, internal_6ef50fb, public_6ef50fb);
extern "C" NAKED register_t __cdecl internal_6ef50fb()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f010bc]
        cmp eax, 1
        je public_6ef5112
        test eax, eax
        jne public_6ef5117
        cmp dword ptr ds : [public_6f010c0], 1
        jne public_6ef5117
        public_6ef5112 : nop
        call public_6ef8c0e
        public_6ef5117 : nop
        push dword ptr ss : [esp+4]
        call public_6ef8c47
        push 0xFF
        call dword ptr ds : [public_6efe4d0]
        pop ecx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ef50fb)
    }
}

#undef public_6ef5112
#undef public_6ef5117
