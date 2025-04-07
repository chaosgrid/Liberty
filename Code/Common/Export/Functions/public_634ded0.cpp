#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634ded0);

PROC_DECLARE(0x634ded0, internal_634ded0, public_634ded0);
extern "C" NAKED register_t __cdecl internal_634ded0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x14]
        and eax, 0xFFFFFFF0
        mov ecx, dword ptr ds : [eax]
        and ecx, 0xFFF
        inc ecx
        shl ecx, 4
        sub eax, ecx
        ret 
        UNREACHABLE_TRAP(0x634ded0)
    }
}
