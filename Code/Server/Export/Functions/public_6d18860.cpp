#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d13ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15650);
CLANG_FORWARD_PROC_SYMBOL(public_6d18860);

PROC_DECLARE(0x6d18860, internal_6d18860, public_6d18860);
extern "C" NAKED register_t __cdecl internal_6d18860()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6d15650
        mov ecx, eax
        call public_6d13ef0
        ret 
        UNREACHABLE_TRAP(0x6d18860)
    }
}
