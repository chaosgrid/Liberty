#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d95e50);
CLANG_FORWARD_PROC_SYMBOL(public_6d961b0);

PROC_DECLARE(0x6d8f480, internal_6d8f480, public_6d8f480);
extern "C" NAKED register_t __cdecl internal_6d8f480()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6d95e50
        mov ecx, eax
        call public_6d961b0
        ret 4
        UNREACHABLE_TRAP(0x6d8f480)
    }
}
