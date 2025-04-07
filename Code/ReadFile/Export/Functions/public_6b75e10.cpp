#include "ReadFile-PCH.h"

PROC_DECLARE(0x6b75e10, internal_6b75e10, public_6b75e10);
extern "C" NAKED register_t __cdecl internal_6b75e10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x118]
        ret 4
        UNREACHABLE_TRAP(0x6b75e10)
    }
}
