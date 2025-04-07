#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d8f4e);

PROC_DECLARE(0x65d8f4e, internal_65d8f4e, public_65d8f4e);
extern "C" NAKED register_t __cdecl internal_65d8f4e()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+0x50], offset public_65e56b0
        mov dword ptr ds : [eax+0x14], 1
        ret 
        UNREACHABLE_TRAP(0x65d8f4e)
    }
}
