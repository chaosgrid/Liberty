#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_406700);
CLANG_FORWARD_PROC_SYMBOL(public_418be8);

PROC_DECLARE(0x406700, internal_406700, public_406700);
extern "C" NAKED register_t __cdecl internal_406700()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_41c620
        jmp public_418be8
        UNREACHABLE_TRAP(0x406700)
    }
}
