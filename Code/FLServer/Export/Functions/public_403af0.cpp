#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403af0);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

PROC_DECLARE(0x403af0, internal_403af0, public_403af0);
extern "C" NAKED register_t __cdecl internal_403af0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_418978
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x403af0)
    }
}
