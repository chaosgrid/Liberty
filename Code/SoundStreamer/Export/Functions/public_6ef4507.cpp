#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4507);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4512);

PROC_DECLARE(0x6ef4507, internal_6ef4507, public_6ef4507);
extern "C" NAKED register_t __cdecl internal_6ef4507()
{
    __asm
    {
        push dword ptr ss : [esp+4]
        call public_6ef4512
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ef4507)
    }
}
