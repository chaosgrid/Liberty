#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4e3e);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4eab);

PROC_DECLARE(0x6ef4eab, internal_6ef4eab, public_6ef4eab);
extern "C" NAKED register_t __cdecl internal_6ef4eab()
{
    __asm
    {
        push dword ptr ss : [esp+4]
        call public_6ef4e3e
        neg eax
        sbb eax, eax
        pop ecx
        neg eax
        dec eax
        ret 
        UNREACHABLE_TRAP(0x6ef4eab)
    }
}
