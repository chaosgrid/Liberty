#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ead640);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee15a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eeb210);
CLANG_FORWARD_PROC_SYMBOL(public_6eec250);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f50650);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab4ab);

#define public_6ee168e _public_6ee168e
#define public_6ee16cc _public_6ee16cc
#define public_6ee172b _public_6ee172b
#define public_6ee1734 _public_6ee1734
#define public_6ee180d _public_6ee180d
#define public_6ee1810 _public_6ee1810

PROC_DECLARE(0x6ee15a0, internal_6ee15a0, public_6ee15a0);
extern "C" NAKED register_t __cdecl internal_6ee15a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab4ab @0x6ee15a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab4ab
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x128
        mov eax, dword ptr ss : [esp+0x13C]
        mov dl, byte ptr ss : [esp+7]
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x144]
        push ebp
        push esi
        mov dword ptr ds : [ebx+4], eax
        mov eax, dword ptr ss : [esp+0x144]
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
        lea ecx, ss:[esp+0x14C]
        push esi
        push ecx
        mov dword ptr ss : [esp+0x148], edi
        mov dword ptr ds : [ebx], offset public_6fb7230
        call dword ptr ds : [public_6fb3444]
        push esi
        call public_6fa6e50
        add esp, 0xC
        cmp eax, edi
        je public_6ee180d
        push 0x10
        mov ecx, eax
        call public_6fa6e30
        test al, al
        je public_6ee180d
        mov edx, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ss : [esp+0x148]
        push edx
        call public_6f73930
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [public_6fb3370]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        test eax, eax
        jne public_6ee1810
        mov dword ptr ds : [ebx+0x28], 0x4A3C
        mov ecx, dword ptr ss : [ebp+4]
        cmp ecx, edi
        je public_6ee168e
        mov eax, dword ptr ss : [ebp+0xC]
        sub eax, ecx
        sar eax, 2
        cmp eax, 4
        jae public_6ee16cc
        public_6ee168e : nop
        push 0x10
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
        mov edx, dword ptr ss : [ebp+4]
        push edx
        call public_6fa8fe0
        lea eax, ds:[esi+0x10]
        add esp, 4
        mov ecx, ebp
        mov dword ptr ss : [ebp+0xC], eax
        call public_6fa3db0
        lea ecx, ds:[esi+eax*4]
        mov dword ptr ss : [ebp+8], ecx
        mov dword ptr ss : [ebp+4], esi
/*FIXUP public_6ee16cc : nop
        push offset public_6fb6348 @0x6ee16cc*/
  FIXUP public_6ee16cc : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6348
        call dword ptr ds : [public_6fb3684]
        add esp, 4
        lea edx, ss:[esp+0x1C]
        push edx
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ss : [ebp+8]
        push 1
        push eax
        mov ecx, ebp
        call public_6f937c0
        mov ecx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x6C], edi
        mov byte ptr ss : [esp+0x70], 0
        call public_6eb6bb0
        lea edx, ss:[esp+0x20]
        push edx
        mov dword ptr ss : [esp+0x24], eax
        call public_6f50650
        add esp, 4
        cmp eax, edi
        je public_6ee172b
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+4]
        add eax, 4
        push eax
        lea ecx, ss:[esp+0x70]
        jmp public_6ee1734
/*FIXUP public_6ee172b : nop
        push offset public_6fb632c @0x6ee172b*/
  FIXUP public_6ee172b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb632c
        lea ecx, ss:[esp+0x70]
        public_6ee1734 : nop
        call public_6ead640
/*FIXUP push offset public_6fb6324 @0x6ee1739*/
  FIXUP push esp
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
        push 1
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], eax
        call public_6f937c0
        mov eax, dword ptr ss : [esp+0x18]
        push 0
        push eax
        lea ecx, ss:[esp+0xB8]
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
        push 1
        push ecx
        mov ecx, ebp
        call public_6f937c0
        mov edx, dword ptr ss : [esp+0x18]
/*FIXUP push offset public_6fb6064 @0x6ee17c5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        push edx
        lea eax, ss:[esp+0xFC]
        push 2
        push eax
        call public_6eeb210
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x38]
        rep movsd
        lea ecx, ss:[esp+0x3C]
        push ecx
        call dword ptr ds : [public_6fb3684]
        add esp, 0x14
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [ebp+8]
        push 1
        push eax
        mov ecx, ebp
        call public_6f937c0
        jmp public_6ee1810
        public_6ee180d : nop
        mov dword ptr ds : [ebx+0x24], edi
        public_6ee1810 : nop
        mov ecx, dword ptr ss : [esp+0x138]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x134
        ret 0xC
        UNREACHABLE_TRAP(0x6ee15a0)
    }
}

#undef public_6ee168e
#undef public_6ee16cc
#undef public_6ee172b
#undef public_6ee1734
#undef public_6ee180d
#undef public_6ee1810
