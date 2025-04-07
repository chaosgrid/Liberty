#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d1930);
CLANG_FORWARD_PROC_SYMBOL(public_65d1a70);

PROC_DECLARE(0x65d1930, internal_65d1930, public_65d1930);
extern "C" NAKED register_t __cdecl internal_65d1930()
{
    __asm
    {
        push ecx
        mov dword ptr ds : [ecx], offset public_65e11f4
        call public_65d1a70
        ret 
        UNREACHABLE_TRAP(0x65d1930)
    }
}
