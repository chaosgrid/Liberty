#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4424f0);
CLANG_FORWARD_PROC_SYMBOL(public_59dd00);

#define public_4b47f8 _public_4b47f8
#define public_4b480b _public_4b480b
#define public_4b481a _public_4b481a
#define public_4b4820 _public_4b4820

PROC_DECLARE(0x4b47c0, internal_4b47c0, public_4b47c0);
extern "C" NAKED register_t __cdecl internal_4b47c0()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0x10
        jne public_4b4820
        mov dl, byte ptr ds : [ecx-0x2C0]
        push esi
        lea esi, ds:[ecx-0x32C]
        and dl, 0xFC
        push 0
        push esi
        mov byte ptr ds : [esi+0x6C], dl
        call public_59dd00
        push 0
        call public_4424f0
        add esp, 0xC
        test esi, esi
        je public_4b481a
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_4b480b
        push edi
        public_4b47f8 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_4b47f8
        pop edi
        public_4b480b : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        public_4b481a : nop
        mov al, 1
        pop esi
        ret 4
        public_4b4820 : nop
        xor al, al
        ret 4
        UNREACHABLE_TRAP(0x4b47c0)
    }
}

#undef public_4b47f8
#undef public_4b480b
#undef public_4b481a
#undef public_4b4820
