#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f7b50);
CLANG_FORWARD_PROC_SYMBOL(public_54bc80);

#define public_50c498 _public_50c498

PROC_DECLARE(0x50c460, internal_50c460, public_50c460);
extern "C" NAKED register_t __cdecl internal_50c460()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_54bc80
        mov cl, byte ptr ds : [esi+0x7C]
        test al, al
        sete al
        xor al, cl
        and al, 1
        xor al, cl
        test al, 1
        mov byte ptr ds : [esi+0x7C], al
        je public_50c498
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        mov ecx, esi
        call public_4f7b50
        mov cl, byte ptr ds : [esi+0x7C]
        mov dl, cl
        xor dl, al
        and dl, 1
        xor dl, cl
        mov byte ptr ds : [esi+0x7C], dl
        public_50c498 : nop
        mov al, byte ptr ds : [esi+0x7C]
        and al, 1
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x50c460)
    }
}

#undef public_50c498
