#include "Common-PCH.h"

PROC_DECLARE(0x6263040, internal_6263040, public_6263040);
extern "C" NAKED register_t __cdecl internal_6263040()
{
    __asm
    {
        push ecx
        mov eax, ecx
        mov cl, byte ptr ss : [esp+3]
        mov byte ptr ds : [eax], cl
        xor ecx, ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], 0xFFFFFFFF
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], ecx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6263040)
    }
}
