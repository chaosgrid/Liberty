#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ead640);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee0ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaf10);
CLANG_FORWARD_PROC_SYMBOL(public_6eeb190);
CLANG_FORWARD_PROC_SYMBOL(public_6eeb210);
CLANG_FORWARD_PROC_SYMBOL(public_6eec250);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab46b);

#define public_6ee0ba4 _public_6ee0ba4
#define public_6ee0bf1 _public_6ee0bf1
#define public_6ee0c48 _public_6ee0c48
#define public_6ee0def _public_6ee0def
#define public_6ee0df2 _public_6ee0df2

PROC_DECLARE(0x6ee0ab0, internal_6ee0ab0, public_6ee0ab0);
extern "C" NAKED register_t __cdecl internal_6ee0ab0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab46b @0x6ee0ab2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab46b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1F4
        mov eax, dword ptr ss : [esp+0x208]
        mov dl, byte ptr ss : [esp+0xB]
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x210]
        push ebp
        push esi
        mov dword ptr ds : [ebx+4], eax
        mov eax, dword ptr ss : [esp+0x210]
        lea ebp, ds:[ebx+0x14]
        push edi
        xor edi, edi
        mov dword ptr ds : [ebx+8], ecx
        mov dword ptr ds : [ebx+0xC], edi
        mov dword ptr ds : [ebx+0x10], edi
        lea esi, ds:[ebx+0xC]
        mov byte ptr ss : [ebp], dl
        mov dword ptr ss : [ebp+4], edi
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], edi
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ds : [ebx+0x24], eax
        mov dword ptr ds : [ebx+0x28], edi
        mov dword ptr ds : [ebx+0x2C], edi
        lea ecx, ss:[esp+0x218]
        push esi
        push ecx
        mov dword ptr ss : [esp+0x214], edi
        mov dword ptr ds : [ebx], offset public_6fb71b4
        call dword ptr ds : [public_6fb3444]
        mov edx, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ss : [esp+0x21C]
        add esp, 8
        push edx
        call public_6f73930
        push esi
        mov dword ptr ss : [esp+0x18], eax
        call public_6fa6e50
        add esp, 4
        cmp eax, edi
        je public_6ee0def
        push 0x400
        mov ecx, eax
        call public_6fa6e30
        test al, al
        je public_6ee0def
        call dword ptr ds : [public_6fb3370]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        test eax, eax
        jne public_6ee0df2
        mov dword ptr ds : [ebx+0x28], 0x4A3F
        mov ecx, dword ptr ss : [ebp+4]
        cmp ecx, edi
        je public_6ee0ba4
        mov eax, dword ptr ss : [ebp+0xC]
        sub eax, ecx
        sar eax, 2
        cmp eax, 7
        jae public_6ee0bf1
        public_6ee0ba4 : nop
        push 0x1C
        call public_6fa912a
        mov ecx, dword ptr ss : [ebp+4]
        add esp, 4
        mov esi, eax
        mov eax, dword ptr ss : [ebp+8]
        push esi
        push eax
        push ecx
        mov ecx, ebp
        call public_6eed270
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp+4]
        push edx
        push eax
        mov ecx, ebp
        call public_6ea1490
        mov ecx, dword ptr ss : [ebp+4]
        push ecx
        call public_6fa8fe0
        lea edx, ds:[esi+0x1C]
        add esp, 4
        mov ecx, ebp
        mov dword ptr ss : [ebp+0xC], edx
        call public_6fa3db0
        lea eax, ds:[esi+eax*4]
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+4], esi
/*FIXUP public_6ee0bf1 : nop
        push offset public_6fb6348 @0x6ee0bf1*/
  FIXUP public_6ee0bf1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6348
        call dword ptr ds : [public_6fb3684]
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        lea ecx, ss:[esp+0x20]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x28], eax
        call public_6eb5770
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+8]
        lea edx, ss:[esp+0x6C]
        push edx
        mov dword ptr ss : [esp+0x70], edi
        mov byte ptr ss : [esp+0x74], 0
        call public_6eb6bb0
        push eax
        call public_6eeb190
        add esp, 8
        test eax, eax
        je public_6ee0c48
/*FIXUP push offset public_6fb632c @0x6ee0c3a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb632c
        lea ecx, ss:[esp+0x70]
        call public_6ead640
/*FIXUP public_6ee0c48 : nop
        push offset public_6fb6324 @0x6ee0c48*/
  FIXUP public_6ee0c48 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6324
        lea ecx, ss:[esp+0x70]
        call public_6eec250
        lea eax, ss:[esp+0x2C]
        mov ecx, 0x11
        lea esi, ss:[esp+0x6C]
        lea edi, ss:[esp+0x28]
        push eax
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], eax
        call public_6eb5770
        mov eax, dword ptr ss : [esp+0x14]
        push 0
        push eax
        lea ecx, ss:[esp+0x184]
        push 1
        push ecx
        call public_6eeb210
        lea edx, ss:[esp+0x3C]
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x38]
        push edx
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0x14
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        mov ecx, ebp
        call public_6eb5770
        mov edx, dword ptr ss : [esp+0x14]
        push 0
        push edx
        lea eax, ss:[esp+0xFC]
        push 2
        push eax
        call public_6eeb210
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x38]
        rep movsd
        mov esi, dword ptr ds : [public_6fb3684]
        lea ecx, ss:[esp+0x3C]
        push ecx
        call esi
        add esp, 0x14
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [ebp+8]
        push edx
        push eax
        mov ecx, ebp
        call public_6eb5770
/*FIXUP push offset public_6fb6314 @0x6ee0d13*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6314
        call esi
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        lea ecx, ss:[esp+0x1C]
        push ecx
        push 1
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x28], eax
        call public_6f937c0
        mov eax, dword ptr ss : [esp+0x14]
        push 0
        push eax
        lea ecx, ss:[esp+0x140]
        push 3
        push ecx
        call public_6eeb210
        lea edx, ss:[esp+0x3C]
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x38]
        push edx
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0x14
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        push 1
        push ecx
        mov ecx, ebp
        call public_6f937c0
/*FIXUP push offset public_6fb7194 @0x6ee0d7a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7194
        lea ecx, ss:[esp+0xB4]
        mov dword ptr ss : [esp+0xB4], 0
        mov byte ptr ss : [esp+0xB8], 0
        call public_6ead640
        mov edx, dword ptr ds : [ebx+0xC]
        push edx
/*FIXUP push offset public_6fb6064 @0x6ee0da2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea eax, ss:[esp+0xBC]
        push eax
        lea ecx, ss:[esp+0x1CC]
        push ecx
        call public_6eeaf10
        lea edx, ss:[esp+0x3C]
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x38]
        push edx
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0x14
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        push 1
        push ecx
        mov ecx, ebp
        call public_6f937c0
        jmp public_6ee0df2
        public_6ee0def : nop
        mov dword ptr ds : [ebx+0x24], edi
        public_6ee0df2 : nop
        mov ecx, dword ptr ss : [esp+0x204]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x200
        ret 0xC
        UNREACHABLE_TRAP(0x6ee0ab0)
    }
}

#undef public_6ee0ba4
#undef public_6ee0bf1
#undef public_6ee0c48
#undef public_6ee0def
#undef public_6ee0df2
