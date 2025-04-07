#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62da400);

PROC_DECLARE(0x62da400, internal_62da400, public_62da400);
extern "C" NAKED register_t __cdecl internal_62da400()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x158], eax
        ret 4
        UNREACHABLE_TRAP(0x62da400)
    }
}
