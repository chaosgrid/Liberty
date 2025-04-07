#include "Alchemy-PCH.h"

PROC_DECLARE(0x620aef0, internal_620aef0, public_620aef0);
extern "C" NAKED register_t __cdecl internal_620aef0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x1C]
        inc ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x620aef0)
    }
}
