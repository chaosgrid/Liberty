#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b3d420, internal_6b3d420, public_6b3d420);
extern "C" NAKED register_t __cdecl internal_6b3d420()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c0b8]
        mov dword ptr ds : [public_6b73df4], eax
        ret 
        UNREACHABLE_TRAP(0x6b3d420)
    }
}
