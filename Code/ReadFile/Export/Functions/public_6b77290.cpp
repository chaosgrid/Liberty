#include "ReadFile-PCH.h"

PROC_DECLARE(0x6b77290, internal_6b77290, public_6b77290);
extern "C" NAKED register_t __cdecl internal_6b77290()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], 0
        or eax, 0xFFFFFFFF
        ret 0xC
        UNREACHABLE_TRAP(0x6b77290)
    }
}
