#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6f19cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1a630);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f1a671 _public_6f1a671
#define public_6f1a6b6 _public_6f1a6b6
#define public_6f1a6e4 _public_6f1a6e4
#define public_6f1a6ff _public_6f1a6ff
#define public_6f1a723 _public_6f1a723
#define public_6f1a727 _public_6f1a727
#define public_6f1a738 _public_6f1a738
#define public_6f1a75d _public_6f1a75d
#define public_6f1a778 _public_6f1a778
#define public_6f1a793 _public_6f1a793
#define public_6f1a7b2 _public_6f1a7b2
#define public_6f1a7e0 _public_6f1a7e0
#define public_6f1a802 _public_6f1a802
#define public_6f1a826 _public_6f1a826
#define public_6f1a82a _public_6f1a82a
#define public_6f1a839 _public_6f1a839
#define public_6f1a854 _public_6f1a854
#define public_6f1a871 _public_6f1a871
#define public_6f1a8bd _public_6f1a8bd
#define public_6f1a8d1 _public_6f1a8d1
#define public_6f1a8d4 _public_6f1a8d4

PROC_DECLARE(0x6f1a630, internal_6f1a630, public_6f1a630);
extern "C" NAKED register_t __cdecl internal_6f1a630()
{
    __asm
    {
        sub esp, 0x98
        push ebx
        push ebp
        push esi
        push edi
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6fb3030]
        mov esi, dword ptr ss : [esp+0xAC]
        xor eax, eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x13], al
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [public_6fb3018]
        test al, al
        je public_6f1a8d4
        mov ebp, dword ptr ds : [public_6fb3294]
        mov edi, dword ptr ds : [public_6fb3048]
/*FIXUP public_6f1a671 : nop
        push offset public_6fb445c @0x6f1a671*/
  FIXUP public_6f1a671 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb445c
        mov ecx, esi
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6f1a6b6
        push 0
        call edi
        push eax
        call dword ptr ds : [public_6fb3344]
        add esp, 4
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jne public_6f1a871
        push eax
        mov ecx, esi
        call edi
        push eax
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        jmp public_6f1a871
/*FIXUP public_6f1a6b6 : nop
        push offset public_6fb8d70 @0x6f1a6b6*/
  FIXUP public_6f1a6b6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8d70
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6f1a7b2
        xor ebx, ebx
        push ebx
        call edi
        cmp eax, ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov byte ptr ss : [esp+0x24], bl
        jne public_6f1a6ff
        mov dword ptr ss : [esp+0x20], ebx
        mov byte ptr ss : [esp+0x24], bl
/*FIXUP public_6f1a6e4 : nop
        push offset public_6fb8d64 @0x6f1a6e4*/
  FIXUP public_6f1a6e4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8d64
        push ebx
        mov ecx, esi
        call edi
        push eax
        call ebp
        add esp, 8
        test eax, eax
        jne public_6f1a75d
        mov eax, 2
        jmp public_6f1a738
        public_6f1a6ff : nop
        push eax
        lea eax, ss:[esp+0x28]
        push 0x40
        push eax
        call public_6ea9f40
        mov dword ptr ss : [esp+0x2C], eax
        mov al, byte ptr ss : [esp+0x30]
        add esp, 0xC
        cmp al, bl
        je public_6f1a6e4
        cmp al, 0x30
        jl public_6f1a723
        cmp al, 0x39
        jle public_6f1a727
        public_6f1a723 : nop
        cmp al, 0x2D
        jne public_6f1a6e4
        public_6f1a727 : nop
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_6fb3020]
        cmp eax, ebx
        je public_6f1a871
        public_6f1a738 : nop
        mov edx, dword ptr ss : [esp+0xB0]
        lea ecx, ss:[esp+0x18]
        push ecx
        push edx
        push eax
        call public_6f19cd0
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [ecx]
        add esp, 0xC
        push esi
        call dword ptr ds : [eax+4]
        jmp public_6f1a871
/*FIXUP public_6f1a75d : nop
        push offset public_6fb45f8 @0x6f1a75d*/
  FIXUP public_6f1a75d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb45f8
        push ebx
        mov ecx, esi
        call edi
        push eax
        call ebp
        add esp, 8
        test eax, eax
        jne public_6f1a778
        mov eax, 1
        jmp public_6f1a738
/*FIXUP public_6f1a778 : nop
        push offset public_6fb8d60 @0x6f1a778*/
  FIXUP public_6f1a778 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8d60
        push ebx
        mov ecx, esi
        call edi
        push eax
        call ebp
        add esp, 8
        test eax, eax
        jne public_6f1a793
        mov eax, 3
        jmp public_6f1a738
/*FIXUP public_6f1a793 : nop
        push offset public_6fb8d54 @0x6f1a793*/
  FIXUP public_6f1a793 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8d54
        push ebx
        mov ecx, esi
        call edi
        push eax
        call ebp
        add esp, 8
        test eax, eax
        jne public_6f1a871
        mov eax, 4
        jmp public_6f1a738
/*FIXUP public_6f1a7b2 : nop
        push offset public_6fb8d4c @0x6f1a7b2*/
  FIXUP public_6f1a7b2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8d4c
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6f1a854
        xor ebx, ebx
        push ebx
        call edi
        cmp eax, ebx
        mov dword ptr ss : [esp+0x64], ebx
        mov byte ptr ss : [esp+0x68], bl
        jne public_6f1a802
        mov dword ptr ss : [esp+0x64], ebx
        mov byte ptr ss : [esp+0x68], bl
        public_6f1a7e0 : nop
        push ebx
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], 0xA
        call edi
        push eax
/*FIXUP push offset public_6fb4ae4 @0x6f1a7ee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4ae4
        call ebp
        add esp, 8
        test eax, eax
        jne public_6f1a839
        mov byte ptr ss : [esp+0x13], bl
        jmp public_6f1a871
        public_6f1a802 : nop
        push eax
        lea ecx, ss:[esp+0x6C]
        push 0x40
        push ecx
        call public_6ea9f40
        mov dword ptr ss : [esp+0x70], eax
        mov al, byte ptr ss : [esp+0x74]
        add esp, 0xC
        cmp al, bl
        je public_6f1a7e0
        cmp al, 0x30
        jl public_6f1a826
        cmp al, 0x39
        jle public_6f1a82a
        public_6f1a826 : nop
        cmp al, 0x2D
        jne public_6f1a7e0
        public_6f1a82a : nop
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_6fb3020]
        mov dword ptr ss : [esp+0x1C], eax
        jmp public_6f1a871
        public_6f1a839 : nop
        push ebx
        mov ecx, esi
        call edi
        push eax
/*FIXUP push offset public_6fb8d44 @0x6f1a83f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8d44
        call ebp
        add esp, 8
        test eax, eax
        jne public_6f1a871
        mov byte ptr ss : [esp+0x13], 1
        jmp public_6f1a871
/*FIXUP public_6f1a854 : nop
        push offset public_6fb8d3c @0x6f1a854*/
  FIXUP public_6f1a854 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8d3c
        call dword ptr ds : [public_6fb3014]
        test al, al
        je public_6f1a871
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6fb3040]
        mov byte ptr ss : [esp+0x13], al
        public_6f1a871 : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3018]
        test al, al
        jne public_6f1a671
        mov ebx, dword ptr ss : [esp+0x18]
        test ebx, ebx
        je public_6f1a8d4
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x1C]
        mov cl, byte ptr ss : [esp+0x13]
        mov ebp, dword ptr ss : [esp+0xB4]
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx+0x1C], eax
        mov byte ptr ds : [ebx+4], cl
        mov esi, dword ptr ss : [ebp+8]
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6f1a8bd
        mov edi, eax
        public_6f1a8bd : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_6f1a8d1
        mov dword ptr ds : [eax], ebx
        public_6f1a8d1 : nop
        inc dword ptr ss : [ebp+0xC]
        public_6f1a8d4 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x98
        ret 
        UNREACHABLE_TRAP(0x6f1a630)
    }
}

#undef public_6f1a671
#undef public_6f1a6b6
#undef public_6f1a6e4
#undef public_6f1a6ff
#undef public_6f1a723
#undef public_6f1a727
#undef public_6f1a738
#undef public_6f1a75d
#undef public_6f1a778
#undef public_6f1a793
#undef public_6f1a7b2
#undef public_6f1a7e0
#undef public_6f1a802
#undef public_6f1a826
#undef public_6f1a82a
#undef public_6f1a839
#undef public_6f1a854
#undef public_6f1a871
#undef public_6f1a8bd
#undef public_6f1a8d1
#undef public_6f1a8d4
