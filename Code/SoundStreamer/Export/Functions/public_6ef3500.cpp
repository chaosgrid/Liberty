#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef1dc0);

#define public_6ef3526 _public_6ef3526

PROC_DECLARE(0x6ef3500, internal_6ef3500, public_6ef3500);
extern "C" NAKED register_t __cdecl internal_6ef3500()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_6ef3526
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax+0x60]
        test edx, edx
        je public_6ef3526
        call public_6ef1dc0
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], eax
        mov eax, 1
        ret 0xC
        public_6ef3526 : nop
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6ef3500)
    }
}

#undef public_6ef3526
