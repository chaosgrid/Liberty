#include "Common-PCH.h"

PROC_DECLARE(0x62a8260, internal_62a8260, public_62a8260);
extern "C" NAKED register_t __cdecl internal_62a8260()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], offset public_639e004
        ret 4
        UNREACHABLE_TRAP(0x62a8260)
    }
}
