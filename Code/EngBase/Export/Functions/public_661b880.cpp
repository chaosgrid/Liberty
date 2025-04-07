#include "EngBase-PCH.h"

PROC_DECLARE(0x661b880, internal_661b880, public_661b880);
extern "C" NAKED register_t __cdecl internal_661b880()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        lea edx, ds:[ecx+0x3C]
        push edx
        call dword ptr ds : [eax+0xC]
        ret 0x10
        UNREACHABLE_TRAP(0x661b880)
    }
}
