#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec3bf0);

PROC_DECLARE(0x6ec3bf0, internal_6ec3bf0, public_6ec3bf0);
extern "C" NAKED register_t __cdecl internal_6ec3bf0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        ret 4
        UNREACHABLE_TRAP(0x6ec3bf0)
    }
}
