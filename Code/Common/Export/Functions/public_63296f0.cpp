#include "Common-PCH.h"

PROC_DECLARE(0x63296f0, internal_63296f0, public_63296f0);
extern "C" NAKED register_t __cdecl internal_63296f0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], offset public_63a420c
        mov byte ptr ds : [eax+4], cl
        mov byte ptr ds : [eax+5], cl
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        ret 
        UNREACHABLE_TRAP(0x63296f0)
    }
}
