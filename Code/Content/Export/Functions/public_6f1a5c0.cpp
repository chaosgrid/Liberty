#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1a5c0);

PROC_DECLARE(0x6f1a5c0, internal_6f1a5c0, public_6f1a5c0);
extern "C" NAKED register_t __cdecl internal_6f1a5c0()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_6fb8ccc
        add ecx, 0x20
        jmp dword ptr ds : [public_6fb3034]
        UNREACHABLE_TRAP(0x6f1a5c0)
    }
}
