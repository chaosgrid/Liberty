#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bda1b0);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);

PROC_DECLARE(0x6bebe40, internal_6bebe40, public_6bebe40);
extern "C" NAKED register_t __cdecl internal_6bebe40()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_6c0c8b8
        jmp public_6bda1b0
        UNREACHABLE_TRAP(0x6bebe40)
    }
}
