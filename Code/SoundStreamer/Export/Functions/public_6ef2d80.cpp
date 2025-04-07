#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef2d80);

#define public_6ef2d8f _public_6ef2d8f

PROC_DECLARE(0x6ef2d80, internal_6ef2d80, public_6ef2d80);
extern "C" NAKED register_t __cdecl internal_6ef2d80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f010a4]
        test eax, eax
        je public_6ef2d8f
        or eax, 0xFFFFFFFF
        ret 4
        public_6ef2d8f : nop
        lea eax, ds:[ecx+4]
        mov dword ptr ds : [public_6f010a4], ecx
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xC]
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6ef2d80)
    }
}

#undef public_6ef2d8f
