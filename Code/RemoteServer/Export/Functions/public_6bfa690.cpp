#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfa690, internal_6bfa690, public_6bfa690);
extern "C" NAKED register_t __cdecl internal_6bfa690()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        or byte ptr ds : [ecx+0x20], 0x20
        mov dword ptr ds : [ecx+0x54], eax
        ret 4
        UNREACHABLE_TRAP(0x6bfa690)
    }
}
