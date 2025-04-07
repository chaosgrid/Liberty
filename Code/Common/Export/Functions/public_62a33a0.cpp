#include "Common-PCH.h"

PROC_DECLARE(0x62a33a0, internal_62a33a0, public_62a33a0);
extern "C" NAKED register_t __cdecl internal_62a33a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x44], eax
        mov dword ptr ds : [ecx+0xC], eax
        ret 4
        UNREACHABLE_TRAP(0x62a33a0)
    }
}
