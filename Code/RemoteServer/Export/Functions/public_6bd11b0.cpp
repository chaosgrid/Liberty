#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd11b0, internal_6bd11b0, public_6bd11b0);
extern "C" NAKED register_t __cdecl internal_6bd11b0()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax+4], offset public_6c0b614
        mov dword ptr ds : [eax+8], 0
        mov dword ptr ds : [eax], offset public_6c0b4a0
        mov dword ptr ds : [eax+4], offset public_6c0b498
        ret 
        UNREACHABLE_TRAP(0x6bd11b0)
    }
}
