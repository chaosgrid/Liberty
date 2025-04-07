#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6f0c560);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fad399);

#define public_6f0c5b2 _public_6f0c5b2
#define public_6f0c5b5 _public_6f0c5b5
#define public_6f0c602 _public_6f0c602
#define public_6f0c61b _public_6f0c61b
#define public_6f0c628 _public_6f0c628
#define public_6f0c64c _public_6f0c64c
#define public_6f0c661 _public_6f0c661
#define public_6f0c685 _public_6f0c685

PROC_DECLARE(0x6f0c560, internal_6f0c560, public_6f0c560);
extern "C" NAKED register_t __cdecl internal_6f0c560()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fad399 @0x6f0c562*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fad399
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [esi], offset public_6fb8520
        mov eax, dword ptr ds : [esi+0x20]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x28], 2
        je public_6f0c5b5
        mov ecx, dword ptr ds : [esi+4]
        push eax
        call public_6eea860
        mov ecx, eax
        call public_6f73930
        cmp eax, ebx
        je public_6f0c5b2
        mov byte ptr ds : [eax+0x11D], bl
        public_6f0c5b2 : nop
        mov dword ptr ds : [esi+0x20], ebx
        public_6f0c5b5 : nop
        mov eax, dword ptr ds : [esi+0x44]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [esi+0x44], ebx
        mov dword ptr ds : [esi+0x48], ebx
        mov dword ptr ds : [esi+0x4C], ebx
        mov eax, dword ptr ds : [esi+0x34]
        push eax
        call public_6fa8fe0
        mov dword ptr ds : [esi+0x34], ebx
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x3C], ebx
        add esi, 8
        add esp, 8
        mov dword ptr ss : [esp+0x14], esi
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x2C], 3
        call public_6f1df30
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, ecx
        je public_6f0c61b
        public_6f0c602 : nop
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0xC], eax
        jne public_6f0c602
        public_6f0c61b : nop
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        mov dword ptr ss : [esp+0x10], eax
        je public_6f0c64c
        public_6f0c628 : nop
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_6f68e30
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, esi
        call public_6ecfe80
        cmp dword ptr ss : [esp+0x10], edi
        jne public_6f0c628
        public_6f0c64c : nop
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        cmp eax, edi
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], eax
        je public_6f0c685
        public_6f0c661 : nop
        push ebx
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_6f68e30
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, esi
        call public_6ecfe80
        cmp dword ptr ss : [esp+0x10], edi
        jne public_6f0c661
        public_6f0c685 : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 4
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6f0c560)
    }
}

#undef public_6f0c5b2
#undef public_6f0c5b5
#undef public_6f0c602
#undef public_6f0c61b
#undef public_6f0c628
#undef public_6f0c64c
#undef public_6f0c661
#undef public_6f0c685
