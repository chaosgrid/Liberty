#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63617b0);
CLANG_FORWARD_PROC_SYMBOL(public_6362080);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6398446);

#define public_63617f6 _public_63617f6
#define public_63617f8 _public_63617f8
#define public_636182a _public_636182a
#define public_636182c _public_636182c

PROC_DECLARE(0x63617b0, internal_63617b0, public_63617b0);
extern "C" NAKED register_t __cdecl internal_63617b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6398446 @0x63617b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6398446
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x28
        mov esi, ecx
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+8], eax
        test eax, eax
        mov dword ptr ss : [esp+0x14], 0
        je public_63617f6
        push 0
/*FIXUP push offset public_63ee654 @0x63617e6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee654
        mov ecx, eax
        call public_6362080
        mov edi, eax
        jmp public_63617f8
        public_63617f6 : nop
        xor edi, edi
        public_63617f8 : nop
        push 0x28
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+8], eax
        test eax, eax
        mov dword ptr ss : [esp+0x14], 1
        je public_636182a
        push 0
/*FIXUP push offset public_63ee644 @0x636181c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee644
        mov ecx, eax
        call public_6362080
        jmp public_636182c
        public_636182a : nop
        xor eax, eax
        public_636182c : nop
        mov dword ptr ds : [esi+0x20], eax
        mov eax, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        call dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [esi+0x20]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+8]
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x63617b0)
    }
}

#undef public_63617f6
#undef public_63617f8
#undef public_636182a
#undef public_636182c
