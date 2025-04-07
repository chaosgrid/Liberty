#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfa6b0, internal_6bfa6b0, public_6bfa6b0);
extern "C" NAKED register_t __cdecl internal_6bfa6b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        or byte ptr ds : [ecx+0x20], 2
        mov dword ptr ds : [ecx+0x38], eax
        mov dword ptr ds : [ecx+0x3C], edx
        ret 8
        UNREACHABLE_TRAP(0x6bfa6b0)
    }
}
