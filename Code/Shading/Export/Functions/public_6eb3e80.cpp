#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb3e80);

PROC_DECLARE(0x6eb3e80, internal_6eb3e80, public_6eb3e80);
extern "C" NAKED register_t __cdecl internal_6eb3e80()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [ecx+0xC], eax
        mov dword ptr ds : [ecx+0x10], eax
        mov dword ptr ds : [ecx+8], 0xFFFFFFFF
        ret 4
        UNREACHABLE_TRAP(0x6eb3e80)
    }
}
