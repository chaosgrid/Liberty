#include "Common-PCH.h"

PROC_DECLARE(0x63331e0, internal_63331e0, public_63331e0);
extern "C" NAKED register_t __cdecl internal_63331e0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov byte ptr ds : [eax+0xC], cl
        mov byte ptr ds : [eax+0xD], cl
        mov dword ptr ds : [eax], offset public_63a49e4
        ret 
        UNREACHABLE_TRAP(0x63331e0)
    }
}
