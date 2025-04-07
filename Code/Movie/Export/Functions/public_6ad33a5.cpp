#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad33a5);

PROC_DECLARE(0x6ad33a5, internal_6ad33a5, public_6ad33a5);
extern "C" NAKED register_t __cdecl internal_6ad33a5()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        and edx, 0x300
        or edx, 0x7F
        mov word ptr ss : [esp+6], dx
        fldcw word ptr ss : [esp+6]
        ret 
        UNREACHABLE_TRAP(0x6ad33a5)
    }
}
