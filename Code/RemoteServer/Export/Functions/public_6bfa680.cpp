#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfa680, internal_6bfa680, public_6bfa680);
extern "C" NAKED register_t __cdecl internal_6bfa680()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        or byte ptr ds : [ecx+0x20], 4
        mov dword ptr ds : [ecx+0x24], eax
        ret 4
        UNREACHABLE_TRAP(0x6bfa680)
    }
}
