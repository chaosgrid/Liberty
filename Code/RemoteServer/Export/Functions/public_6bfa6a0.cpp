#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfa6a0, internal_6bfa6a0, public_6bfa6a0);
extern "C" NAKED register_t __cdecl internal_6bfa6a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        or byte ptr ds : [ecx+0x20], 1
        mov dword ptr ds : [ecx+0x34], eax
        ret 4
        UNREACHABLE_TRAP(0x6bfa6a0)
    }
}
