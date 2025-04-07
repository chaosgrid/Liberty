#include "Server-PCH.h"

PROC_DECLARE(0x6d293f0, internal_6d293f0, public_6d293f0);
extern "C" NAKED register_t __cdecl internal_6d293f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], eax
        mov eax, dword ptr ds : [ecx+4]
        sub eax, edx
        neg eax
        sbb eax, eax
        inc eax
        ret 4
        UNREACHABLE_TRAP(0x6d293f0)
    }
}
