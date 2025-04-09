#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59dbf0);
CLANG_FORWARD_PROC_SYMBOL(public_59dd00);
CLANG_FORWARD_PROC_SYMBOL(public_5a1c50);

PROC_DECLARE(0x4bd830, internal_4bd830, public_4bd830);
extern "C" NAKED register_t __cdecl internal_4bd830()
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
        mov cl, byte ptr ds : [esi+0x6C]
        and cl, 0xFB
        or cl, 3
        mov byte ptr ds : [esi+0x6C], cl
        add esp, 0xC
        mov ecx, esi
        call public_5a1c50
        mov eax, 0x3DCCCCCD
        mov dword ptr ds : [esi+0xB4], eax
        mov dword ptr ds : [esi+0xB8], eax
        and byte ptr ds : [esi+0x6C], 0xFD
        mov dword ptr ds : [esi+0x78], 7
        mov al, 1
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x4bd830)
    }
}
