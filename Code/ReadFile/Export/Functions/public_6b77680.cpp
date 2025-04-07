#include "ReadFile-PCH.h"

PROC_DECLARE(0x6b77680, internal_6b77680, public_6b77680);
extern "C" NAKED register_t __cdecl internal_6b77680()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x18]
        ret 4
        UNREACHABLE_TRAP(0x6b77680)
    }
}
