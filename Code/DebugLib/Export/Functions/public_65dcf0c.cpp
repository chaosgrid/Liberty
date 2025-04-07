#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dcf0c);

PROC_DECLARE(0x65dcf0c, internal_65dcf0c, public_65dcf0c);
extern "C" NAKED register_t __cdecl internal_65dcf0c()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, dword ptr ss : [ebp+8]
        push dword ptr ds : [eax*4+public_65e55f0]
        call dword ptr ds : [public_65e10ac]
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x65dcf0c)
    }
}
