#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_54bc30);
CLANG_FORWARD_PROC_SYMBOL(public_54bc40);
CLANG_FORWARD_PROC_SYMBOL(public_54bc80);

#define public_50c369 _public_50c369
#define public_50c36d _public_50c36d

PROC_DECLARE(0x50c330, internal_50c330, public_50c330);
extern "C" NAKED register_t __cdecl internal_50c330()
{
    __asm
    {
        push esi
        push edi
        mov esi, ecx
        call public_54bc80
        mov dl, byte ptr ds : [esi+0x7C]
        mov cl, dl
        xor cl, al
        and cl, 1
        xor cl, dl
        test cl, 1
        mov byte ptr ds : [esi+0x7C], cl
        jne public_50c36d
        cmp dword ptr ds : [esi+0x40], 0xFFFFFFFF
        jne public_50c36d
        call public_54bc30
        mov edi, dword ptr ss : [esp+0x10]
        cmp eax, edi
        je public_50c369
        call public_54bc40
        cmp eax, edi
        jne public_50c36d
        public_50c369 : nop
        or byte ptr ds : [esi+0x7C], 1
        public_50c36d : nop
        mov al, byte ptr ds : [esi+0x7C]
        pop edi
        and al, 1
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x50c330)
    }
}

#undef public_50c369
#undef public_50c36d
