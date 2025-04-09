#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_47b3e0);
CLANG_FORWARD_PROC_SYMBOL(public_59dbf0);
CLANG_FORWARD_PROC_SYMBOL(public_59dd00);

PROC_DECLARE(0x47b3e0, internal_47b3e0, public_47b3e0);
extern "C" NAKED register_t __cdecl internal_47b3e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        push eax
        push esi
        call public_59dd00
        push esi
        call public_59dbf0
        and byte ptr ds : [esi+0x6C], 0xF8
        mov al, 1
        add esp, 0xC
        mov byte ptr ds : [esi+0x4E7], al
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x47b3e0)
    }
}
