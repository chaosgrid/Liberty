#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59dc00);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4b5110 _public_4b5110
#define public_4b511e _public_4b511e
#define public_4b5138 _public_4b5138

PROC_DECLARE(0x4b50f0, internal_4b50f0, public_4b50f0);
extern "C" NAKED register_t __cdecl internal_4b50f0()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ds : [edi], offset public_5d5544
        dec dword ptr ds : [public_67dcd4]
        mov cl, byte ptr ds : [edi+0x6C]
        mov esi, dword ptr ds : [edi+0xC]
        and cl, 0xFC
        test esi, esi
        mov byte ptr ds : [edi+0x6C], cl
        je public_4b511e
        public_4b5110 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        mov esi, dword ptr ds : [esi+8]
        test esi, esi
        jne public_4b5110
        public_4b511e : nop
        push edi
        call public_59dc00
        mov al, byte ptr ss : [esp+0x10]
        add esp, 4
        test al, 1
        je public_4b5138
        push edi
        call public_5b7e1d
        add esp, 4
        public_4b5138 : nop
        mov eax, edi
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4b50f0)
    }
}

#undef public_4b5110
#undef public_4b511e
#undef public_4b5138
