#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6349020);
CLANG_FORWARD_PROC_SYMBOL(public_6349180);

PROC_DECLARE(0x6349020, internal_6349020, public_6349020);
extern "C" NAKED register_t __cdecl internal_6349020()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        push eax
        call public_6349180
        ret 
        UNREACHABLE_TRAP(0x6349020)
    }
}
