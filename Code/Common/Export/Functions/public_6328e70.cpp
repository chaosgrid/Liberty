#include "Common-PCH.h"

PROC_DECLARE(0x6328e70, internal_6328e70, public_6328e70);
extern "C" NAKED register_t __cdecl internal_6328e70()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx], eax
        ret 4
        UNREACHABLE_TRAP(0x6328e70)
    }
}
