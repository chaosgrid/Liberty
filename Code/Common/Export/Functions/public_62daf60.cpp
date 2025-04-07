#include "Common-PCH.h"

PROC_DECLARE(0x62daf60, internal_62daf60, public_62daf60);
extern "C" NAKED register_t __cdecl internal_62daf60()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 5
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], offset public_639e124
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], 0x43160000
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x18], ecx
        ret 
        UNREACHABLE_TRAP(0x62daf60)
    }
}
