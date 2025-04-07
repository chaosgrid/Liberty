#include "THORN-PCH.h"

PROC_DECLARE(0x6f34ca0, internal_6f34ca0, public_6f34ca0);
extern "C" NAKED register_t __cdecl internal_6f34ca0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax-8]
        add eax, 0xFFFFFFF8
        push eax
        call dword ptr ds : [ecx+0x14]
        lea edx, ds:[eax+eax*8]
        lea eax, ds:[edx*4+0xA]
        ret 4
        UNREACHABLE_TRAP(0x6f34ca0)
    }
}
