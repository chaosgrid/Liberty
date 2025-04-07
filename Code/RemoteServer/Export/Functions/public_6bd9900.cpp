#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd9900, internal_6bd9900, public_6bd9900);
extern "C" NAKED register_t __cdecl internal_6bd9900()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax+4], offset public_6c0b614
        xor ecx, ecx
        mov dword ptr ds : [eax+8], ecx
        mov byte ptr ds : [eax+0x28], cl
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax], offset public_6c0b8d8
        mov dword ptr ds : [eax+4], offset public_6c0b8d0
        mov dword ptr ds : [eax+0xC], ecx
        ret 
        UNREACHABLE_TRAP(0x6bd9900)
    }
}
