#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634fa40);

PROC_DECLARE(0x634f9e0, internal_634f9e0, public_634f9e0);
extern "C" NAKED register_t __cdecl internal_634f9e0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+8]
        push ecx
        movsx ecx, word ptr ds : [eax+0x18]
        add ecx, eax
        call public_634fa40
        ret 8
        UNREACHABLE_TRAP(0x634f9e0)
    }
}
