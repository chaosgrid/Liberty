#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6aca450);
CLANG_FORWARD_PROC_SYMBOL(public_6acca95);

PROC_DECLARE(0x6aca450, internal_6aca450, public_6aca450);
extern "C" NAKED register_t __cdecl internal_6aca450()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        push eax
        push ecx
        push 0
        push 0
        call public_6acca95
        ret 8
        UNREACHABLE_TRAP(0x6aca450)
    }
}
