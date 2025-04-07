#include "ImeUi-PCH.h"

PROC_DECLARE(0x6711b30, internal_6711b30, public_6711b30);
extern "C" NAKED register_t __cdecl internal_6711b30()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        push edx
        push 1
        call dword ptr ds : [eax+0x20]
        ret 4
        UNREACHABLE_TRAP(0x6711b30)
    }
}
