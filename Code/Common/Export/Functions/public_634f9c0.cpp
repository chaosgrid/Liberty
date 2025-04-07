#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634fa20);

PROC_DECLARE(0x634f9c0, internal_634f9c0, public_634f9c0);
extern "C" NAKED register_t __cdecl internal_634f9c0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+8]
        push ecx
        movsx ecx, word ptr ds : [eax+0x18]
        push edx
        add ecx, eax
        call public_634fa20
        ret 8
        UNREACHABLE_TRAP(0x634f9c0)
    }
}
