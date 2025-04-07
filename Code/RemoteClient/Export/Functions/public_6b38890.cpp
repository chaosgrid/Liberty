#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b38890, internal_6b38890, public_6b38890);
extern "C" NAKED register_t __cdecl internal_6b38890()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], offset public_6b6b9e0
        mov dword ptr ds : [eax+4], offset public_6b6b9dc
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [eax], offset public_6b6b868
        mov dword ptr ds : [eax+4], offset public_6b6b864
        ret 4
        UNREACHABLE_TRAP(0x6b38890)
    }
}
