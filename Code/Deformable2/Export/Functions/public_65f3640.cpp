#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f3640);
CLANG_FORWARD_PROC_SYMBOL(public_65f3ed0);

PROC_DECLARE(0x65f3640, internal_65f3640, public_65f3640);
extern "C" NAKED register_t __cdecl internal_65f3640()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_6601308
        jmp public_65f3ed0
        UNREACHABLE_TRAP(0x65f3640)
    }
}
