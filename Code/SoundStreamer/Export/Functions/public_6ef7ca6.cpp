#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef7ca6);
CLANG_FORWARD_PROC_SYMBOL(public_6ef810c);

#define public_6ef7cb7 _public_6ef7cb7

PROC_DECLARE(0x6ef7ca6, internal_6ef7ca6, public_6ef7ca6);
extern "C" NAKED register_t __cdecl internal_6ef7ca6()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        cmp dword ptr ds : [eax], 0xE06D7363
        je public_6ef7cb7
        xor eax, eax
        ret 
        public_6ef7cb7 : nop
        jmp public_6ef810c
        UNREACHABLE_TRAP(0x6ef7ca6)
    }
}

#undef public_6ef7cb7
