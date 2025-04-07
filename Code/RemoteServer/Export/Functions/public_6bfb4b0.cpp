#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6bfb4b0);

PROC_DECLARE(0x6bfb4b0, internal_6bfb4b0, public_6bfb4b0);
extern "C" NAKED register_t __cdecl internal_6bfb4b0()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_6c0ccc8
        jmp public_6bebe40
        UNREACHABLE_TRAP(0x6bfb4b0)
    }
}
