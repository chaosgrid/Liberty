#include "ImeUi-PCH.h"

PROC_DECLARE(0x6712530, internal_6712530, public_6712530);
extern "C" NAKED register_t __cdecl internal_6712530()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x4C], eax
        ret 4
        UNREACHABLE_TRAP(0x6712530)
    }
}
