#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d8950);

PROC_DECLARE(0x62d8950, internal_62d8950, public_62d8950);
extern "C" NAKED register_t __cdecl internal_62d8950()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0xD4], eax
        ret 4
        UNREACHABLE_TRAP(0x62d8950)
    }
}
