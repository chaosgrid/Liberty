#include "Server-PCH.h"

PROC_DECLARE(0x6d2f930, internal_6d2f930, public_6d2f930);
extern "C" NAKED register_t __cdecl internal_6d2f930()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], eax
        mov eax, dword ptr ds : [ecx+0xC]
        sub eax, edx
        neg eax
        sbb eax, eax
        inc eax
        ret 4
        UNREACHABLE_TRAP(0x6d2f930)
    }
}
