#include "Common-PCH.h"

PROC_DECLARE(0x62ad450, internal_62ad450, public_62ad450);
extern "C" NAKED register_t __cdecl internal_62ad450()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [eax+0xC], ecx
        ret 8
        UNREACHABLE_TRAP(0x62ad450)
    }
}
