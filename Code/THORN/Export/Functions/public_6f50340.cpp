#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b220);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b900);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f700);

PROC_DECLARE(0x6f50340, internal_6f50340, public_6f50340);
extern "C" NAKED register_t __cdecl internal_6f50340()
{
    __asm
    {
        push 1
        call public_6f4f700
        push eax
        call public_6f4b900
        call public_6f4b220
        push eax
        call public_6f4b900
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f50340)
    }
}
