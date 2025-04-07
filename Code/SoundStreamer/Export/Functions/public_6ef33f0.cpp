#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef1990);

#define public_6ef3410 _public_6ef3410

PROC_DECLARE(0x6ef33f0, internal_6ef33f0, public_6ef33f0);
extern "C" NAKED register_t __cdecl internal_6ef33f0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_6ef3410
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax+0x60]
        test edx, edx
        je public_6ef3410
        call public_6ef1990
        mov eax, 1
        ret 8
        public_6ef3410 : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6ef33f0)
    }
}

#undef public_6ef3410
