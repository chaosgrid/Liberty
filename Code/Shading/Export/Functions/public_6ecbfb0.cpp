#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecbfb0);

PROC_DECLARE(0x6ecbfb0, internal_6ecbfb0, public_6ecbfb0);
extern "C" NAKED register_t __cdecl internal_6ecbfb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+0x40], edx
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6ecbfb0)
    }
}
