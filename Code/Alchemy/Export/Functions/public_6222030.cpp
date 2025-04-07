#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6222030);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

PROC_DECLARE(0x6222030, internal_6222030, public_6222030);
extern "C" NAKED register_t __cdecl internal_6222030()
{
    __asm
    {
        push 0x20
        call public_624612c
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x1C], dl
        mov byte ptr ds : [eax+0x1D], 0
        ret 8
        UNREACHABLE_TRAP(0x6222030)
    }
}
