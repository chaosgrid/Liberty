#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627a110);
CLANG_FORWARD_PROC_SYMBOL(public_627a5b0);

PROC_DECLARE(0x627a5b0, internal_627a5b0, public_627a5b0);
extern "C" NAKED register_t __cdecl internal_627a5b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        mov ecx, offset public_63fbbc4
        call public_627a110
        ret 
        UNREACHABLE_TRAP(0x627a5b0)
    }
}
