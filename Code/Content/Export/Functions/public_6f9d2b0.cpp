#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6f69570);
CLANG_FORWARD_PROC_SYMBOL(public_6f9cd00);
CLANG_FORWARD_PROC_SYMBOL(public_6f9d070);
CLANG_FORWARD_PROC_SYMBOL(public_6f9d2b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9d500);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb19c8);

#define public_6f9d35d _public_6f9d35d
#define public_6f9d35f _public_6f9d35f
#define public_6f9d379 _public_6f9d379
#define public_6f9d37e _public_6f9d37e
#define public_6f9d389 _public_6f9d389
#define public_6f9d38e _public_6f9d38e
#define public_6f9d3a0 _public_6f9d3a0
#define public_6f9d3aa _public_6f9d3aa
#define public_6f9d3cc _public_6f9d3cc
#define public_6f9d3de _public_6f9d3de
#define public_6f9d3e6 _public_6f9d3e6
#define public_6f9d3eb _public_6f9d3eb
#define public_6f9d3f3 _public_6f9d3f3
#define public_6f9d3f8 _public_6f9d3f8
#define public_6f9d404 _public_6f9d404
#define public_6f9d409 _public_6f9d409
#define public_6f9d43a _public_6f9d43a
#define public_6f9d45d _public_6f9d45d
#define public_6f9d462 _public_6f9d462
#define public_6f9d468 _public_6f9d468
#define public_6f9d48a _public_6f9d48a
#define public_6f9d4a0 _public_6f9d4a0
#define public_6f9d4a9 _public_6f9d4a9
#define public_6f9d4ab _public_6f9d4ab
#define public_6f9d4d6 _public_6f9d4d6

PROC_DECLARE(0x6f9d2b0, internal_6f9d2b0, public_6f9d2b0);
extern "C" NAKED register_t __cdecl internal_6f9d2b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb19c8 @0x6f9d2b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb19c8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        mov al, byte ptr ss : [esp+0x30]
        push ebx
        push ebp
        xor ebx, ebx
        push esi
        push edi
        mov esi, ecx
        mov byte ptr ss : [esp+0x13], bl
        mov byte ptr ss : [esp+0x14], al
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov ecx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x3C]
        push ecx
        sub esp, 0xC
        mov ecx, esp
        mov dword ptr ss : [esp+0x50], esp
        push eax
        push eax
        mov dword ptr ss : [esp+0x44], ebx
        call public_6f9d500
        mov edx, dword ptr ss : [esp+0x48]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, esi
        call public_6f9cd00
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ebx
        je public_6f9d48a
        mov ecx, dword ptr ss : [esp+0x1C]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov dword ptr ss : [esp+0x40], edx
        je public_6f9d48a
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x17], 1
        call public_6f9d070
        cmp eax, ebx
        je public_6f9d35d
        lea edi, ds:[eax+4]
        jmp public_6f9d35f
        public_6f9d35d : nop
        xor edi, edi
        public_6f9d35f : nop
        mov eax, dword ptr ss : [esp+0x34]
        lea esi, ds:[eax+4]
        cmp esi, edi
        je public_6f9d48a
        mov ecx, dword ptr ds : [edi+4]
        cmp ecx, ebx
        jne public_6f9d379
        xor ebp, ebp
        jmp public_6f9d37e
        public_6f9d379 : nop
        mov ebp, dword ptr ds : [edi+8]
        sub ebp, ecx
        public_6f9d37e : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        jne public_6f9d389
        xor edx, edx
        jmp public_6f9d38e
        public_6f9d389 : nop
        mov edx, dword ptr ds : [esi+8]
        sub edx, eax
        public_6f9d38e : nop
        cmp ebp, edx
        ja public_6f9d3de
        mov ebp, dword ptr ds : [edi+8]
        cmp ecx, ebp
        je public_6f9d3aa
        lea esp, ss:[esp]
        public_6f9d3a0 : nop
        mov dl, byte ptr ds : [ecx]
        mov byte ptr ds : [eax], dl
        inc eax
        inc ecx
        cmp ecx, ebp
        jne public_6f9d3a0
        public_6f9d3aa : nop
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        push eax
        mov ecx, esi
        call public_6ea1490
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ebx
        jne public_6f9d3cc
        mov edx, dword ptr ds : [esi+4]
        xor edi, edi
        add edx, edi
        mov dword ptr ds : [esi+8], edx
        jmp public_6f9d48a
        public_6f9d3cc : nop
        mov edi, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [esi+4]
        sub edi, eax
        add edx, edi
        mov dword ptr ds : [esi+8], edx
        jmp public_6f9d48a
        public_6f9d3de : nop
        cmp ecx, ebx
        jne public_6f9d3e6
        xor ebp, ebp
        jmp public_6f9d3eb
        public_6f9d3e6 : nop
        mov ebp, dword ptr ds : [edi+8]
        sub ebp, ecx
        public_6f9d3eb : nop
        cmp eax, ebx
        jne public_6f9d3f3
        xor edx, edx
        jmp public_6f9d3f8
        public_6f9d3f3 : nop
        mov edx, dword ptr ds : [esi+0xC]
        sub edx, eax
        public_6f9d3f8 : nop
        cmp ebp, edx
        ja public_6f9d43a
        cmp eax, ebx
        jne public_6f9d404
        xor edx, edx
        jmp public_6f9d409
        public_6f9d404 : nop
        mov edx, dword ptr ds : [esi+8]
        sub edx, eax
        public_6f9d409 : nop
        push eax
        lea ebp, ds:[edx+ecx]
        push ebp
        push ecx
        call public_6fa3dd0
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edi+8]
        add esp, 0xC
        push ecx
        push eax
        push ebp
        mov ecx, esi
        call public_6f69570
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ebx
        jne public_6f9d3cc
        mov edx, dword ptr ds : [esi+4]
        xor edi, edi
        add edx, edi
        mov dword ptr ds : [esi+8], edx
        jmp public_6f9d48a
        public_6f9d43a : nop
        mov ecx, dword ptr ds : [esi+8]
        push ecx
        push eax
        mov ecx, esi
        call public_6ea1490
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ds : [edi+4]
        add esp, 4
        cmp ecx, ebx
        jne public_6f9d45d
        xor eax, eax
        jmp public_6f9d462
        public_6f9d45d : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        public_6f9d462 : nop
        cmp eax, ebx
        jge public_6f9d468
        xor eax, eax
        public_6f9d468 : nop
        push eax
        call public_6fa912a
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, esi
        call public_6f69570
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        public_6f9d48a : nop
        mov ebp, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ss : [esp+0x18]
        cmp edi, ebp
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        je public_6f9d4d6
        mov edi, edi
        public_6f9d4a0 : nop
        cmp edi, ebx
        je public_6f9d4a9
        lea esi, ds:[edi+4]
        jmp public_6f9d4ab
        public_6f9d4a9 : nop
        xor esi, esi
        public_6f9d4ab : nop
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_6ea1490
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6fa8fe0
        add edi, 0x14
        add esp, 4
        cmp edi, ebp
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        jne public_6f9d4a0
        public_6f9d4d6 : nop
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x28]
        mov al, byte ptr ss : [esp+0x17]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x20
        ret 0x10
        UNREACHABLE_TRAP(0x6f9d2b0)
    }
}

#undef public_6f9d35d
#undef public_6f9d35f
#undef public_6f9d379
#undef public_6f9d37e
#undef public_6f9d389
#undef public_6f9d38e
#undef public_6f9d3a0
#undef public_6f9d3aa
#undef public_6f9d3cc
#undef public_6f9d3de
#undef public_6f9d3e6
#undef public_6f9d3eb
#undef public_6f9d3f3
#undef public_6f9d3f8
#undef public_6f9d404
#undef public_6f9d409
#undef public_6f9d43a
#undef public_6f9d45d
#undef public_6f9d462
#undef public_6f9d468
#undef public_6f9d48a
#undef public_6f9d4a0
#undef public_6f9d4a9
#undef public_6f9d4ab
#undef public_6f9d4d6
