#include "Common-PCH.h"

PROC_DECLARE(0x62fd420, internal_62fd420, public_62fd420);
extern "C" NAKED register_t __cdecl internal_62fd420()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dl, byte ptr ds : [ecx+4]
        mov byte ptr ds : [eax+4], dl
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], offset public_63a2268
        ret 4
        UNREACHABLE_TRAP(0x62fd420)
    }
}
