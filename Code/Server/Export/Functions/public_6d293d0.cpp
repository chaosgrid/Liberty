#include "Server-PCH.h"

PROC_DECLARE(0x6d293d0, internal_6d293d0, public_6d293d0);
extern "C" NAKED register_t __cdecl internal_6d293d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+8]
        sub eax, dword ptr ds : [ecx]
        neg eax
        sbb eax, eax
        inc eax
        ret 8
        UNREACHABLE_TRAP(0x6d293d0)
    }
}
