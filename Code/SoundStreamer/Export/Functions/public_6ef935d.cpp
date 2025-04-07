#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef9328);
CLANG_FORWARD_PROC_SYMBOL(public_6ef935d);

PROC_DECLARE(0x6ef935d, internal_6ef935d, public_6ef935d);
extern "C" NAKED register_t __cdecl internal_6ef935d()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        and eax, 0xFFF7FFFF
        push eax
        push dword ptr ss : [esp+8]
        call public_6ef9328
        pop ecx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ef935d)
    }
}
