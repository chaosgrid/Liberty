#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec0bc0);

PROC_DECLARE(0x6ec0bc0, internal_6ec0bc0, public_6ec0bc0);
extern "C" NAKED register_t __cdecl internal_6ec0bc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+0xC], edx
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6ec0bc0)
    }
}
