#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b5060);
CLANG_FORWARD_PROC_SYMBOL(public_59dbf0);
CLANG_FORWARD_PROC_SYMBOL(public_59dd00);

PROC_DECLARE(0x4b5060, internal_4b5060, public_4b5060);
extern "C" NAKED register_t __cdecl internal_4b5060()
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
        add esp, 0xC
        mov byte ptr ds : [esi+0x6C], cl
        mov al, 1
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x4b5060)
    }
}
