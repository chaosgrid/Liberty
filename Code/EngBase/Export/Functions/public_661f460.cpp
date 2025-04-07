#include "EngBase-PCH.h"

PROC_DECLARE(0x661f460, internal_661f460, public_661f460);
extern "C" NAKED register_t __cdecl internal_661f460()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+0x44], ecx
        ret 0xC
        UNREACHABLE_TRAP(0x661f460)
    }
}
