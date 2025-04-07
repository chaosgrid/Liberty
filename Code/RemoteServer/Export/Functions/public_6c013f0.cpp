#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6c013f0);

PROC_DECLARE(0x6c013f0, internal_6c013f0, public_6c013f0);
extern "C" NAKED register_t __cdecl internal_6c013f0()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_6c0d8d0
        jmp public_6bebe40
        UNREACHABLE_TRAP(0x6c013f0)
    }
}
