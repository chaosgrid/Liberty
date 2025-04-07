#include "Common-PCH.h"

PROC_DECLARE(0x6309aa0, internal_6309aa0, public_6309aa0);
extern "C" NAKED register_t __cdecl internal_6309aa0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+0x48], ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6309aa0)
    }
}
