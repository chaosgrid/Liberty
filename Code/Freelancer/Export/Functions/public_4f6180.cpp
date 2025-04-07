#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f6180);

PROC_DECLARE(0x4f6180, internal_4f6180, public_4f6180);
extern "C" NAKED register_t __cdecl internal_4f6180()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x28], eax
        ret 4
        UNREACHABLE_TRAP(0x4f6180)
    }
}
