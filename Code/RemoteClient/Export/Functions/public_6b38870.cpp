#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b38870, internal_6b38870, public_6b38870);
extern "C" NAKED register_t __cdecl internal_6b38870()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax+4], offset public_6b6b9dc
        mov dword ptr ds : [eax+8], 0
        mov dword ptr ds : [eax], offset public_6b6b868
        mov dword ptr ds : [eax+4], offset public_6b6b864
        ret 
        UNREACHABLE_TRAP(0x6b38870)
    }
}
