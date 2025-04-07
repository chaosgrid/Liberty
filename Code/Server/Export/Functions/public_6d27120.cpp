#include "Server-PCH.h"

PROC_DECLARE(0x6d27120, internal_6d27120, public_6d27120);
extern "C" NAKED register_t __cdecl internal_6d27120()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, 1
        mov edx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        ret 8
        UNREACHABLE_TRAP(0x6d27120)
    }
}
