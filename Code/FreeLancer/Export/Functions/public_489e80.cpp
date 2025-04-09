#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_489b50);
CLANG_FORWARD_PROC_SYMBOL(public_489e80);

PROC_DECLARE(0x489e80, internal_489e80, public_489e80);
extern "C" NAKED register_t __cdecl internal_489e80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        push eax
        push ecx
        mov ecx, offset public_671f50
        call public_489b50
        ret 
        UNREACHABLE_TRAP(0x489e80)
    }
}
