#include "Common-PCH.h"

PROC_DECLARE(0x631b7a0, internal_631b7a0, public_631b7a0);
extern "C" NAKED register_t __cdecl internal_631b7a0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], 0xFFFFFFFF
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov byte ptr ds : [eax+0xC], 1
        mov dword ptr ds : [eax+0x10], ecx
        ret 
        UNREACHABLE_TRAP(0x631b7a0)
    }
}
