#include "FreeLancer-PCH.h"

PROC_DECLARE(0x53d920, internal_53d920, public_53d920);
extern "C" NAKED register_t __cdecl internal_53d920()
{
    __asm
    {
        mov al, byte ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0xC]
        mov byte ptr ds : [public_678b95], 1
        mov byte ptr ds : [public_678b94], al
        mov dword ptr ds : [public_673378], ecx
        ret 0xC
        UNREACHABLE_TRAP(0x53d920)
    }
}
