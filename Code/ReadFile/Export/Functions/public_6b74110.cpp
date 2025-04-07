#include "ReadFile-PCH.h"

PROC_DECLARE(0x6b74110, internal_6b74110, public_6b74110);
extern "C" NAKED register_t __cdecl internal_6b74110()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x24C]
        inc ecx
        mov dword ptr ds : [eax+0x24C], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6b74110)
    }
}
