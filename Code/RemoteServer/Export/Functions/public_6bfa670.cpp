#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfa670, internal_6bfa670, public_6bfa670);
extern "C" NAKED register_t __cdecl internal_6bfa670()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        or byte ptr ds : [ecx+0x20], 8
        mov dword ptr ds : [ecx+0x28], eax
        ret 4
        UNREACHABLE_TRAP(0x6bfa670)
    }
}
