#include "Common-PCH.h"

PROC_DECLARE(0x62876c0, internal_62876c0, public_62876c0);
extern "C" NAKED register_t __cdecl internal_62876c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x198], eax
        ret 4
        UNREACHABLE_TRAP(0x62876c0)
    }
}
