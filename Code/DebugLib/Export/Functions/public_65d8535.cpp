#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d8535);
CLANG_FORWARD_PROC_SYMBOL(public_65d8547);

PROC_DECLARE(0x65d8535, internal_65d8535, public_65d8535);
extern "C" NAKED register_t __cdecl internal_65d8535()
{
    __asm
    {
        push dword ptr ds : [public_65e63d4]
        push dword ptr ss : [esp+8]
        call public_65d8547
        pop ecx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x65d8535)
    }
}
