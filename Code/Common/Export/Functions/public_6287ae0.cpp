#include "Common-PCH.h"

PROC_DECLARE(0x6287ae0, internal_6287ae0, public_6287ae0);
extern "C" NAKED register_t __cdecl internal_6287ae0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], ecx
        ret 
        UNREACHABLE_TRAP(0x6287ae0)
    }
}
