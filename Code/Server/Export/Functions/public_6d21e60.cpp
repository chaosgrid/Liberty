#include "Server-PCH.h"

PROC_DECLARE(0x6d21e60, internal_6d21e60, public_6d21e60);
extern "C" NAKED register_t __cdecl internal_6d21e60()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0xC]
        sub eax, dword ptr ds : [ecx+0x10]
        neg eax
        sbb eax, eax
        mov dword ptr ds : [ecx+0x18], 0
        inc eax
        ret 4
        UNREACHABLE_TRAP(0x6d21e60)
    }
}
