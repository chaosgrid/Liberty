#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58d560);

PROC_DECLARE(0x58d560, internal_58d560, public_58d560);
extern "C" NAKED register_t __cdecl internal_58d560()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x4F0], edx
        ret 4
        UNREACHABLE_TRAP(0x58d560)
    }
}
