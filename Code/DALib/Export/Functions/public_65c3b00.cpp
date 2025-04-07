#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c3b00);

PROC_DECLARE(0x65c3b00, internal_65c3b00, public_65c3b00);
extern "C" NAKED register_t __cdecl internal_65c3b00()
{
    __asm
    {
        fld qword ptr ds : [ecx+0x58]
        ret 
        UNREACHABLE_TRAP(0x65c3b00)
    }
}
