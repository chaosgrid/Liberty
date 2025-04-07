#include "Alchemy-PCH.h"

PROC_DECLARE(0x6222aa0, internal_6222aa0, public_6222aa0);
extern "C" NAKED register_t __cdecl internal_6222aa0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x24]
        inc ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6222aa0)
    }
}
