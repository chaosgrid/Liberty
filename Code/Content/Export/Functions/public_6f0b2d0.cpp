#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f0be60);

PROC_DECLARE(0x6f0b2d0, internal_6f0b2d0, public_6f0b2d0);
extern "C" NAKED register_t __cdecl internal_6f0b2d0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x2C]
        jmp public_6f0be60
        UNREACHABLE_TRAP(0x6f0b2d0)
    }
}
