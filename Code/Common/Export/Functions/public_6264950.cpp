#include "Common-PCH.h"

PROC_DECLARE(0x6264950, internal_6264950, public_6264950);
extern "C" NAKED register_t __cdecl internal_6264950()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], 0x3F800000
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x18], 0xBF800000
        ret 
        UNREACHABLE_TRAP(0x6264950)
    }
}
