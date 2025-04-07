#include "Common-PCH.h"

PROC_DECLARE(0x6291790, internal_6291790, public_6291790);
extern "C" NAKED register_t __cdecl internal_6291790()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+0xC8], eax
        mov dword ptr ds : [ecx+0xCC], edx
        ret 8
        UNREACHABLE_TRAP(0x6291790)
    }
}
