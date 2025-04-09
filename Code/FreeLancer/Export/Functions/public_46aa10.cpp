#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_45f860);
CLANG_FORWARD_PROC_SYMBOL(public_4683b0);
CLANG_FORWARD_PROC_SYMBOL(public_4684e0);
CLANG_FORWARD_PROC_SYMBOL(public_468bf0);
CLANG_FORWARD_PROC_SYMBOL(public_46aa10);
CLANG_FORWARD_PROC_SYMBOL(public_46ad40);
CLANG_FORWARD_PROC_SYMBOL(public_46ba60);
CLANG_FORWARD_PROC_SYMBOL(public_46ba90);
CLANG_FORWARD_PROC_SYMBOL(public_46bb00);
CLANG_FORWARD_PROC_SYMBOL(public_46bb50);
CLANG_FORWARD_PROC_SYMBOL(public_46c800);
CLANG_FORWARD_PROC_SYMBOL(public_46ea00);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_JUMP_SYMBOL(public_5bb7ee);

#define public_46aab1 _public_46aab1
#define public_46aaf2 _public_46aaf2
#define public_46ab2a _public_46ab2a
#define public_46ab3d _public_46ab3d
#define public_46ab42 _public_46ab42
#define public_46ab97 _public_46ab97
#define public_46ac16 _public_46ac16
#define public_46ac60 _public_46ac60
#define public_46ad12 _public_46ad12
#define public_46ad20 _public_46ad20

PROC_DECLARE(0x46aa10, internal_46aa10, public_46aa10);
extern "C" NAKED register_t __cdecl internal_46aa10()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bb7ee @0x46aa18*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bb7ee
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ds : [public_66da7c]
        mov dword ptr fs : [0], esp
        sub esp, 0x2C
        push ebx
        mov ebx, dword ptr ds : [public_5c62b0]
        push ebp
        push esi
        xor ebp, ebp
        cmp eax, ebp
        push edi
        mov edi, dword ptr ss : [esp+0x4C]
        je public_46aaf2
        mov al, byte ptr ss : [esp+0x54]
        push ebp
        push ebp
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x24], al
        call public_42a7e0
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], ebp
        push 0xFFFFFFFF
        push edi
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x4C], ebp
        call ebx
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x44], 1
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ss : [esp+0x20]
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        lea edx, ss:[esp+0x54]
        push edx
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x50], 2
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, ebp
        mov byte ptr ss : [esp+0x44], 1
        je public_46aab1
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], ebp
        public_46aab1 : nop
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x44], 0
        call dword ptr ds : [public_5c62ac]
        mov edx, dword ptr ss : [esp+0x50]
        lea ecx, ss:[esp+0x1C]
        push ecx
        push ecx
        mov ecx, esp
        mov dword ptr ss : [esp+0x18], esp
        push edx
        call public_46ad40
        mov ecx, dword ptr ds : [public_66da7c]
        call public_45f860
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        call public_46ba90
        public_46aaf2 : nop
        mov al, byte ptr ss : [esp+0x54]
        test al, al
        je public_46ad20
        mov al, byte ptr ds : [public_66d44c]
        test al, 1
        jne public_46ab2a
        or al, 1
        mov byte ptr ds : [public_66d44c], al
        lea eax, ss:[esp+0x54]
        push eax
        mov ecx, offset public_66d440
        call public_46ba60
/*FIXUP push offset _public_468bf0 @0x46ab1d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_468bf0
        call public_5b7e6c
        add esp, 4
        public_46ab2a : nop
        mov ecx, dword ptr ds : [public_66da60]
        cmp ecx, ebp
        je public_46ab3d
        call public_4683b0
        mov esi, eax
        jmp public_46ab42
        public_46ab3d : nop
        mov esi, offset public_66d440
        public_46ab42 : nop
        mov eax, dword ptr ds : [public_5c62cc]
        mov dword ptr ss : [esp+0x14], offset public_66d424
        mov dword ptr ss : [esp+0x10], eax
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x44], 3
        call dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x54], eax
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x54]
        push ecx
        push eax
        lea edx, ss:[esp+0x54]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x50], 4
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x54]
        cmp ecx, ebp
        mov byte ptr ss : [esp+0x44], 3
        je public_46ab97
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x54], ebp
        public_46ab97 : nop
        mov ebp, dword ptr ds : [public_5c62c8]
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        call ebp
        push 0xFFFFFFFF
        push edi
        lea ecx, ss:[esp+0x30]
        call ebx
        mov edx, dword ptr ds : [eax]
        mov ebx, 5
        mov ecx, eax
        mov dword ptr ss : [esp+0x44], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x54], eax
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi+4]
        push eax
        push edi
        mov ecx, esi
        mov byte ptr ss : [esp+0x4C], 6
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x54]
        push ecx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ds : [esi+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ss : [esp+0x54]
        test ecx, ecx
        mov byte ptr ss : [esp+0x44], bl
        je public_46ac16
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x54], 0
        public_46ac16 : nop
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        call dword ptr ds : [public_5c62ac]
        mov edi, dword ptr ds : [public_66da60]
        test edi, edi
        je public_46ad20
        lea esi, ds:[edi+0x1C]
        mov ecx, esi
        call public_46bb50
        lea eax, ss:[esp+0x4C]
        push eax
        mov ecx, edi
        call public_53e430
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ss : [esp+0x4C]
        cmp eax, ecx
        je public_46ad12
        mov ebx, 9
        public_46ac60 : nop
        mov eax, dword ptr ds : [eax+8]
        push eax
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_5c62e4]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x44], 7
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x54], eax
        lea eax, ss:[esp+0x54]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x48], 8
        call public_46bb00
        lea ecx, ss:[esp+0x54]
        mov byte ptr ss : [esp+0x44], 7
        call public_45eeb0
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        call ebp
        lea ecx, ss:[esp+0x50]
        call dword ptr ds : [public_5c62e0]
        mov edx, dword ptr ss : [esp+0x50]
        lea ecx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x44], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x48], 0xA
        call public_46bb00
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x44], bl
        call public_45eeb0
        mov ecx, dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ds : [ecx]
        lea ecx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x4C], edx
        mov dword ptr ss : [esp+0x44], 0xFFFFFFFF
        call dword ptr ds : [public_5c62d4]
        mov eax, dword ptr ss : [esp+0x4C]
        cmp eax, dword ptr ds : [edi+4]
        jne public_46ac60
        public_46ad12 : nop
        mov eax, dword ptr ds : [edi+0x18]
        inc eax
        mov ecx, edi
        mov dword ptr ds : [edi+0x18], eax
        call public_4684e0
        public_46ad20 : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x38
        ret 
        UNREACHABLE_TRAP(0x46aa10)
    }
}

#undef public_46aab1
#undef public_46aaf2
#undef public_46ab2a
#undef public_46ab3d
#undef public_46ab42
#undef public_46ab97
#undef public_46ac16
#undef public_46ac60
#undef public_46ad12
#undef public_46ad20
