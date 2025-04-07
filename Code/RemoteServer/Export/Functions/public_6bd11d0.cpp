#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bd11d0, internal_6bd11d0, public_6bd11d0);
extern "C" NAKED register_t __cdecl internal_6bd11d0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], offset public_6c0b618
        mov dword ptr ds : [eax+4], offset public_6c0b614
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [eax], offset public_6c0b4a0
        mov dword ptr ds : [eax+4], offset public_6c0b498
        ret 4
        UNREACHABLE_TRAP(0x6bd11d0)
    }
}
