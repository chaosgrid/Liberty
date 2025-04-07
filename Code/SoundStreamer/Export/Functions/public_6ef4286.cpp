#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4140);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4286);

PROC_DECLARE(0x6ef4286, internal_6ef4286, public_6ef4286);
extern "C" NAKED register_t __cdecl internal_6ef4286()
{
    __asm
    {
        push esi
        mov esi, ecx
        push dword ptr ss : [esp+8]
        call public_6ef4140
        mov dword ptr ds : [esi], offset public_6efc2a8
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ef4286)
    }
}
