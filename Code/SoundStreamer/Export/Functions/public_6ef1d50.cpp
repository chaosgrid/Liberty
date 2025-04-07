#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef1d50);

#define public_6ef1d6b _public_6ef1d6b

PROC_DECLARE(0x6ef1d50, internal_6ef1d50, public_6ef1d50);
extern "C" NAKED register_t __cdecl internal_6ef1d50()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xB8]
        test eax, eax
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x88], edx
        je public_6ef1d6b
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        public_6ef1d6b : nop
        ret 4
        UNREACHABLE_TRAP(0x6ef1d50)
    }
}

#undef public_6ef1d6b
