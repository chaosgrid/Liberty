#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418f2a);

PROC_DECLARE(0x40d870, internal_40d870, public_40d870);
extern "C" NAKED register_t __cdecl internal_40d870()
{
    __asm
    {
        mov dword ptr ds : [ecx+0xEC], 0
        jmp public_418f2a
        UNREACHABLE_TRAP(0x40d870)
    }
}
