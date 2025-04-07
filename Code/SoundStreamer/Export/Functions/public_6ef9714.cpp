#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef9714);

PROC_DECLARE(0x6ef9714, internal_6ef9714, public_6ef9714);
extern "C" NAKED register_t __cdecl internal_6ef9714()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        xor eax, eax
        stosd 
        stosd 
        stosd 
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6ef9714)
    }
}
