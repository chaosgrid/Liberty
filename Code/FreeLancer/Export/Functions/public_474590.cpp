#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a3e0);
CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_474590);
CLANG_FORWARD_PROC_SYMBOL(public_4a7690);
CLANG_FORWARD_PROC_SYMBOL(public_59d9c0);

#define public_4745b4 _public_4745b4
#define public_4745d7 _public_4745d7
#define public_4745ea _public_4745ea
#define public_4745f9 _public_4745f9

PROC_DECLARE(0x474590, internal_474590, public_474590);
extern "C" NAKED register_t __cdecl internal_474590()
{
    __asm
    {
        push esi
/*FIXUP push offset public_5d052c @0x474591*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d052c
        call public_59d9c0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_4745f9
        call public_41a3e0
        test al, al
        je public_4745b4
        mov byte ptr ds : [esi+0x32C], 0
        public_4745b4 : nop
        xor eax, eax
        mov al, byte ptr ds : [esi+0x32C]
        push eax
        call public_4a7690
        mov edx, dword ptr ds : [esi]
        add esp, 4
        mov ecx, esi
        call dword ptr ds : [edx+0x84]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_4745ea
        push edi
        public_4745d7 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_4745d7
        pop edi
        public_4745ea : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        public_4745f9 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x474590)
    }
}

#undef public_4745b4
#undef public_4745d7
#undef public_4745ea
#undef public_4745f9
