#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6349030);
CLANG_FORWARD_PROC_SYMBOL(public_6349110);

PROC_DECLARE(0x6349030, internal_6349030, public_6349030);
extern "C" NAKED register_t __cdecl internal_6349030()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        push eax
        call public_6349110
        ret 
        UNREACHABLE_TRAP(0x6349030)
    }
}
