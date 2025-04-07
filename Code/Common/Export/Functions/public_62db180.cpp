#include "Common-PCH.h"

PROC_DECLARE(0x62db180, internal_62db180, public_62db180);
extern "C" NAKED register_t __cdecl internal_62db180()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 0xF
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], offset public_639e174
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], ecx
        ret 
        UNREACHABLE_TRAP(0x62db180)
    }
}
