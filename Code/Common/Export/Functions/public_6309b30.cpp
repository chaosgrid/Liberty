#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6309b30);

PROC_DECLARE(0x6309b30, internal_6309b30, public_6309b30);
extern "C" NAKED register_t __cdecl internal_6309b30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+4], eax
        ret 4
        UNREACHABLE_TRAP(0x6309b30)
    }
}
