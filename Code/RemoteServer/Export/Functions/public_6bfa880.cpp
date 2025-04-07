#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfa880, internal_6bfa880, public_6bfa880);
extern "C" NAKED register_t __cdecl internal_6bfa880()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        or byte ptr ds : [ecx+0x20], 0x80
        mov dword ptr ds : [ecx+0x30], eax
        ret 4
        UNREACHABLE_TRAP(0x6bfa880)
    }
}
