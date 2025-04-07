#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b3d930, internal_6b3d930, public_6b3d930);
extern "C" NAKED register_t __cdecl internal_6b3d930()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c0d8]
        mov dword ptr ds : [public_6b73e00], eax
        ret 
        UNREACHABLE_TRAP(0x6b3d930)
    }
}
