#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59dbf0);
CLANG_FORWARD_PROC_SYMBOL(public_59dd00);

PROC_DECLARE(0x5a2070, internal_5a2070, public_5a2070);
extern "C" NAKED register_t __cdecl internal_5a2070()
{
    __asm
    {
        or eax, 0xFFFFFFFF
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+0x8AC], eax
        mov dword ptr ds : [esi+0x7C], eax
        mov dword ptr ds : [esi+0x80], eax
        xor eax, eax
        mov dword ptr ds : [esi+0x8A4], eax
        mov dword ptr ds : [esi+0x88C], eax
        mov byte ptr ds : [esi+0x8A1], al
        mov eax, dword ptr ss : [esp+8]
        push eax
        push esi
        mov dword ptr ds : [esi+0x8A8], 0x10
        mov byte ptr ds : [esi+0x8A0], 1
        mov byte ptr ds : [esi+0x8A2], 1
        call public_59dd00
        push esi
        call public_59dbf0
        mov cl, byte ptr ds : [esi+0x6C]
        and cl, 0xFB
        or cl, 3
        add esp, 0xC
        mov byte ptr ds : [esi+0x6C], cl
        mov al, 1
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x5a2070)
    }
}
