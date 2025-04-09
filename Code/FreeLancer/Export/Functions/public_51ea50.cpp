#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a0f0);
CLANG_FORWARD_PROC_SYMBOL(public_51b450);

PROC_DECLARE(0x51ea50, internal_51ea50, public_51ea50);
extern "C" NAKED register_t __cdecl internal_51ea50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push esi
        push eax
        mov esi, ecx
        call public_51b450
        push 0x40400000
        push 0x3F800000
        mov bl, al
        call public_41a0f0
        add esp, 8
        mov byte ptr ds : [esi+0xF8], 0
        pop esi
        mov al, bl
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x51ea50)
    }
}
