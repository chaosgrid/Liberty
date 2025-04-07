#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d8930);

PROC_DECLARE(0x62d8930, internal_62d8930, public_62d8930);
extern "C" NAKED register_t __cdecl internal_62d8930()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0xC8], eax
        ret 4
        UNREACHABLE_TRAP(0x62d8930)
    }
}
