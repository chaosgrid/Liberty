#include "Common-PCH.h"

PROC_DECLARE(0x629d4b0, internal_629d4b0, public_629d4b0);
extern "C" NAKED register_t __cdecl internal_629d4b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0xF0], eax
        ret 4
        UNREACHABLE_TRAP(0x629d4b0)
    }
}
