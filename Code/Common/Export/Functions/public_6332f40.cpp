#include "Common-PCH.h"

PROC_DECLARE(0x6332f40, internal_6332f40, public_6332f40);
extern "C" NAKED register_t __cdecl internal_6332f40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0xC], eax
        ret 4
        UNREACHABLE_TRAP(0x6332f40)
    }
}
