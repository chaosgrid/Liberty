#include "Server-PCH.h"

PROC_DECLARE(0x6ce3040, internal_6ce3040, public_6ce3040);
extern "C" NAKED register_t __cdecl internal_6ce3040()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0xC], cl
        mov dword ptr ds : [eax], offset public_6d64f24
        ret 
        UNREACHABLE_TRAP(0x6ce3040)
    }
}
