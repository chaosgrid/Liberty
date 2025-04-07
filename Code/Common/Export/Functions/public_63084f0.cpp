#include "Common-PCH.h"

PROC_DECLARE(0x63084f0, internal_63084f0, public_63084f0);
extern "C" NAKED register_t __cdecl internal_63084f0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov byte ptr ds : [eax+0x20], cl
        mov byte ptr ds : [eax+0x21], cl
        ret 
        UNREACHABLE_TRAP(0x63084f0)
    }
}
