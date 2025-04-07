#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f55060);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

PROC_DECLARE(0x6f55060, internal_6f55060, public_6f55060);
extern "C" NAKED register_t __cdecl internal_6f55060()
{
    __asm
    {
        push 0xE8
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0xE4], dl
        mov byte ptr ds : [eax+0xE5], 0
        ret 8
        UNREACHABLE_TRAP(0x6f55060)
    }
}
