#include "Common-PCH.h"

PROC_DECLARE(0x62db210, internal_62db210, public_62db210);
extern "C" NAKED register_t __cdecl internal_62db210()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax+4], 0x13
        mov dword ptr ds : [eax+8], 0
        mov dword ptr ds : [eax], offset public_639e194
        ret 
        UNREACHABLE_TRAP(0x62db210)
    }
}
