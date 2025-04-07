#include "Common-PCH.h"

PROC_DECLARE(0x6286d60, internal_6286d60, public_6286d60);
extern "C" NAKED register_t __cdecl internal_6286d60()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], ecx
        mov dx, word ptr ds : [public_63a4aa4]
        mov word ptr ds : [eax+8], dx
        mov dword ptr ds : [eax+0xC], ecx
        mov byte ptr ds : [eax+0x10], cl
        mov byte ptr ds : [eax+0x12], cl
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x18], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax], offset public_639bdcc
        ret 
        UNREACHABLE_TRAP(0x6286d60)
    }
}
