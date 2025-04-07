#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6312770);

PROC_DECLARE(0x6312770, internal_6312770, public_6312770);
extern "C" NAKED register_t __cdecl internal_6312770()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        ret 4
        UNREACHABLE_TRAP(0x6312770)
    }
}
