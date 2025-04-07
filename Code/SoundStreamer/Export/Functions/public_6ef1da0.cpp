#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef1da0);

#define public_6ef1dbb _public_6ef1dbb

PROC_DECLARE(0x6ef1da0, internal_6ef1da0, public_6ef1da0);
extern "C" NAKED register_t __cdecl internal_6ef1da0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xB8]
        test eax, eax
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x8C], edx
        je public_6ef1dbb
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x40]
        public_6ef1dbb : nop
        ret 4
        UNREACHABLE_TRAP(0x6ef1da0)
    }
}

#undef public_6ef1dbb
