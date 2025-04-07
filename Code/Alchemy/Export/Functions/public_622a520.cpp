#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622a520);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

PROC_DECLARE(0x622a520, internal_622a520, public_622a520);
extern "C" NAKED register_t __cdecl internal_622a520()
{
    __asm
    {
        push 0x18
        call public_624612c
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x14], dl
        mov byte ptr ds : [eax+0x15], 0
        ret 8
        UNREACHABLE_TRAP(0x622a520)
    }
}
