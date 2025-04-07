#include "ImeUi-PCH.h"

PROC_DECLARE(0x67110a0, internal_67110a0, public_67110a0);
extern "C" NAKED register_t __cdecl internal_67110a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x10], eax
        ret 4
        UNREACHABLE_TRAP(0x67110a0)
    }
}
