#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef1d50);

#define public_6ef3495 _public_6ef3495

PROC_DECLARE(0x6ef3470, internal_6ef3470, public_6ef3470);
extern "C" NAKED register_t __cdecl internal_6ef3470()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_6ef3495
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax+0x60]
        test edx, edx
        je public_6ef3495
        mov edx, dword ptr ss : [esp+0xC]
        push edx
        call public_6ef1d50
        mov eax, 1
        ret 0xC
        public_6ef3495 : nop
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6ef3470)
    }
}

#undef public_6ef3495
