#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef3ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4512);

#define public_6ef3eb8 _public_6ef3eb8

PROC_DECLARE(0x6ef3ea0, internal_6ef3ea0, public_6ef3ea0);
extern "C" NAKED register_t __cdecl internal_6ef3ea0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6ef3eb8
        push eax
        call public_6ef4512
        add esp, 4
        mov dword ptr ds : [esi], 0
        public_6ef3eb8 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ef3ea0)
    }
}

#undef public_6ef3eb8
