#include "Common-PCH.h"

PROC_DECLARE(0x62fd400, internal_62fd400, public_62fd400);
extern "C" NAKED register_t __cdecl internal_62fd400()
{
    __asm
    {
        mov eax, ecx
        mov cl, byte ptr ss : [esp+4]
        mov byte ptr ds : [eax+4], cl
        mov dword ptr ds : [eax+8], 0
        mov dword ptr ds : [eax], offset public_63a2268
        ret 4
        UNREACHABLE_TRAP(0x62fd400)
    }
}
