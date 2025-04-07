#include "Common-PCH.h"

PROC_DECLARE(0x62ff030, internal_62ff030, public_62ff030);
extern "C" NAKED register_t __cdecl internal_62ff030()
{
    __asm
    {
        push ecx
        mov eax, ecx
        mov cl, byte ptr ss : [esp+3]
        mov byte ptr ds : [eax+4], cl
        xor ecx, ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62ff030)
    }
}
