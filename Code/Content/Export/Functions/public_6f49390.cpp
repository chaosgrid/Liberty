#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f49390);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9130);

PROC_DECLARE(0x6f49390, internal_6f49390, public_6f49390);
extern "C" NAKED register_t __cdecl internal_6f49390()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x98]
        jmp public_6fa9130
        UNREACHABLE_TRAP(0x6f49390)
    }
}
