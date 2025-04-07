#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b39570, internal_6b39570, public_6b39570);
extern "C" NAKED register_t __cdecl internal_6b39570()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax+4], offset public_6b6bda8
        xor ecx, ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x210], ecx
        mov dword ptr ds : [eax+0x214], ecx
        mov byte ptr ds : [eax+0x218], cl
        mov dword ptr ds : [eax], offset public_6b6bb88
        mov dword ptr ds : [eax+4], offset public_6b6bb80
        mov dword ptr ds : [public_6b73d74], eax
        ret 
        UNREACHABLE_TRAP(0x6b39570)
    }
}
