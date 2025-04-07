#include "SoundManager-PCH.h"

PROC_DECLARE(0x6ee8240, internal_6ee8240, public_6ee8240);
extern "C" NAKED register_t __cdecl internal_6ee8240()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x2C]
        inc ecx
        mov dword ptr ds : [eax+0x2C], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6ee8240)
    }
}
