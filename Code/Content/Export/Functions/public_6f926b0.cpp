#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6eac5b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6efc7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e390);
CLANG_FORWARD_PROC_SYMBOL(public_6f33f80);
CLANG_FORWARD_PROC_SYMBOL(public_6f743e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f30);
CLANG_FORWARD_PROC_SYMBOL(public_6f91310);
CLANG_FORWARD_PROC_SYMBOL(public_6f93670);
CLANG_FORWARD_PROC_SYMBOL(public_6f936a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f936d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f93700);
CLANG_FORWARD_PROC_SYMBOL(public_6f93d80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb15b1);

#define public_6f927b0 _public_6f927b0
#define public_6f927ed _public_6f927ed
#define public_6f927ef _public_6f927ef
#define public_6f92870 _public_6f92870
#define public_6f929d6 _public_6f929d6
#define public_6f929ea _public_6f929ea
#define public_6f92a11 _public_6f92a11
#define public_6f92a29 _public_6f92a29
#define public_6f92a68 _public_6f92a68
#define public_6f92ad0 _public_6f92ad0
#define public_6f92ae6 _public_6f92ae6
#define public_6f92b1f _public_6f92b1f
#define public_6f92b51 _public_6f92b51
#define public_6f92b58 _public_6f92b58
#define public_6f92c1c _public_6f92c1c
#define public_6f92c62 _public_6f92c62
#define public_6f92c95 _public_6f92c95
#define public_6f92cc4 _public_6f92cc4
#define public_6f92d0f _public_6f92d0f
#define public_6f92d11 _public_6f92d11
#define public_6f92d4c _public_6f92d4c
#define public_6f92db7 _public_6f92db7

PROC_DECLARE(0x6f926b0, internal_6f926b0, public_6f926b0);
extern "C" NAKED register_t __cdecl internal_6f926b0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb15b1 @0x6f926b2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb15b1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x570
        push ebx
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+0x8C]
        mov edx, dword ptr ds : [ecx+0x14]
        xor ebx, ebx
        xor al, al
        cmp edx, ebx
        mov dword ptr ss : [esp+0x10], edi
        mov byte ptr ss : [esp+0xB], al
        je public_6f92db7
        push ebp
        push esi
        lea ecx, ss:[esp+0xFC]
        mov dword ptr ss : [esp+0xBC], ebx
        mov dword ptr ss : [esp+0xC0], ebx
        mov dword ptr ss : [esp+0xC4], ebx
        mov dword ptr ss : [esp+0xC8], 0
        mov dword ptr ss : [esp+0xCC], 0
        mov dword ptr ss : [esp+0xD0], 0
        mov dword ptr ss : [esp+0xF8], ebx
        call public_6eac5b0
        or eax, 0xFFFFFFFF
        lea ecx, ss:[esp+0xD4]
        mov dword ptr ss : [esp+0x130], eax
        mov dword ptr ss : [esp+0x134], ebx
        mov dword ptr ss : [esp+0x138], ebx
        mov byte ptr ss : [esp+0x13C], 1
        mov dword ptr ss : [esp+0x140], eax
        mov dword ptr ss : [esp+0x184], ebx
        mov dword ptr ss : [esp+0x188], ebx
        mov byte ptr ss : [esp+0x144], bl
        call public_6efc7a0
        mov ebp, dword ptr ss : [esp+0x590]
        lea eax, ss:[ebp+0x4D4]
        push eax
        call public_6f75f30
        lea ecx, ss:[ebp+0x3EC]
        lea esi, ss:[esp+0x148]
        add esp, 4
        mov dword ptr ss : [esp+0xB8], eax
        sub esi, ecx
        nop 
        lea esp, ss:[esp]
        public_6f927b0 : nop
        mov dl, byte ptr ds : [ecx]
        mov byte ptr ds : [esi+ecx], dl
        inc ecx
        cmp dl, bl
        jne public_6f927b0
        cmp eax, ebx
        mov ecx, dword ptr ds : [edi+0x88]
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ss : [ebp+0x44C]
        mov dword ptr ss : [esp+0xBC], edx
        mov edx, dword ptr ss : [ebp+0x4E4]
        mov dword ptr ss : [esp+0xC0], ecx
        mov dword ptr ss : [esp+0x140], edx
        je public_6f927ed
        mov eax, dword ptr ds : [eax+0x48]
        jmp public_6f927ef
        public_6f927ed : nop
        xor eax, eax
        public_6f927ef : nop
        mov dword ptr ss : [esp+0xC4], eax
        lea eax, ss:[ebp+0x440]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0xC8], ecx
        mov dword ptr ss : [esp+0xD0], eax
        mov eax, dword ptr ss : [ebp+0x464]
        mov dword ptr ss : [esp+0xCC], edx
        mov edx, dword ptr ss : [ebp+0x460]
        lea esi, ss:[ebp+0x41C]
        mov ecx, 9
        lea edi, ss:[esp+0xD4]
        rep movsd
        mov ecx, dword ptr ss : [ebp+0x454]
        mov dword ptr ss : [esp+0x134], eax
        mov eax, dword ptr ss : [ebp+0x468]
        cmp eax, ebx
        mov dword ptr ss : [esp+0xF8], ecx
        mov dword ptr ss : [esp+0x138], edx
        je public_6f92870
        lea ecx, ss:[esp+0xFC]
        push ecx
        push eax
        call dword ptr ds : [public_6fb343c]
        add esp, 8
        public_6f92870 : nop
        mov byte ptr ss : [esp+0x13C], bl
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov byte ptr ss : [esp+0x28], bl
        mov byte ptr ss : [esp+0x29], bl
        mov byte ptr ss : [esp+0x2A], bl
        mov byte ptr ss : [esp+0x2B], bl
        mov byte ptr ss : [esp+0x2C], bl
        mov byte ptr ss : [esp+0x2D], bl
        mov byte ptr ss : [esp+0x2E], bl
        mov byte ptr ss : [esp+0x2F], bl
        mov byte ptr ss : [esp+0x30], bl
        mov byte ptr ss : [esp+0x31], bl
        mov byte ptr ss : [esp+0x32], bl
        mov byte ptr ss : [esp+0x33], bl
        mov byte ptr ss : [esp+0x34], bl
        mov byte ptr ss : [esp+0x35], bl
        mov edx, dword ptr ss : [ebp+0x4CC]
        mov eax, dword ptr ds : [edx+8]
        add eax, 0x507D0
        push eax
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x58C], ebx
        call dword ptr ds : [public_6fb303c]
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_6fb3038]
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x3C], ebx
        mov byte ptr ss : [esp+0x40], bl
        mov byte ptr ss : [esp+0x41], bl
        mov byte ptr ss : [esp+0x42], bl
        mov byte ptr ss : [esp+0x43], bl
        mov byte ptr ss : [esp+0x44], bl
        mov byte ptr ss : [esp+0x45], bl
        mov byte ptr ss : [esp+0x46], bl
        mov byte ptr ss : [esp+0x47], bl
        mov byte ptr ss : [esp+0x48], bl
        mov byte ptr ss : [esp+0x49], bl
        mov byte ptr ss : [esp+0x4A], bl
        mov byte ptr ss : [esp+0x4B], bl
        mov byte ptr ss : [esp+0x4C], bl
        mov byte ptr ss : [esp+0x4D], bl
        lea ecx, ss:[esp+0x38]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0x138]
        push eax
        mov byte ptr ss : [esp+0x594], 1
        call dword ptr ds : [public_6fb34d8]
        add esp, 0xC
        lea ecx, ss:[esp+0x38]
        mov byte ptr ss : [esp+0x588], bl
        call dword ptr ds : [public_6fb3034]
        mov ecx, dword ptr ds : [public_6fbc2e8]
        lea edx, ss:[esp+0x1F]
        mov dword ptr ss : [esp+0x94], ecx
        mov esi, 2
        push edx
        lea ecx, ss:[esp+0xA4]
        mov byte ptr ss : [esp+0x58], 1
        mov dword ptr ss : [esp+0x5C], ebx
        mov byte ptr ss : [esp+0x60], bl
        mov dword ptr ss : [esp+0x90], esi
        mov dword ptr ss : [esp+0x94], ebx
        mov dword ptr ss : [esp+0x9C], ebx
        mov dword ptr ss : [esp+0xA0], ebx
        call public_6ead6a0
        or eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0xB0], eax
        mov dword ptr ss : [esp+0xB4], eax
        mov dword ptr ss : [esp+0x50], offset public_6fbc800
        lea eax, ss:[ebp+0x3EC]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x588], 2
        jne public_6f929d6
        mov dword ptr ss : [esp+0x58], ebx
        mov byte ptr ss : [esp+0x5C], bl
        jmp public_6f929ea
        public_6f929d6 : nop
        push eax
        lea eax, ss:[esp+0x60]
        push 0x30
        push eax
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ss : [esp+0x58], eax
        public_6f929ea : nop
        mov dword ptr ss : [esp+0x8C], esi
        lea esi, ss:[ebp+0x4E8]
        lea ecx, ss:[esp+0xA0]
        cmp ecx, esi
        je public_6f92b58
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        jne public_6f92a11
        xor edi, edi
        jmp public_6f92a29
        public_6f92a11 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x3E0F83E1
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov edi, edx
        public_6f92a29 : nop
        lea ecx, ss:[esp+0xA0]
        call public_6f936a0
        cmp edi, eax
        ja public_6f92a68
        mov edx, dword ptr ss : [esp+0xA4]
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        push edx
        push eax
        push ecx
        call public_6f93d80
        mov ecx, dword ptr ss : [esp+0xB4]
        add esp, 0xC
        push ecx
        push eax
        lea ecx, ss:[esp+0xA8]
        call public_6f936d0
        jmp public_6f92ad0
        public_6f92a68 : nop
        mov ecx, esi
        call public_6f936a0
        lea ecx, ss:[esp+0xA0]
        mov edi, eax
        call public_6f93670
        cmp edi, eax
        ja public_6f92ae6
        mov edx, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0xA0]
        mov dword ptr ss : [esp+0x14], edx
        call public_6f936a0
        mov ecx, dword ptr ss : [esp+0xA4]
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x14]
        imul edi, 0x108
        add edi, eax
        mov eax, dword ptr ds : [esi+4]
        push ecx
        push edi
        push eax
        call public_6f93d80
        mov edx, dword ptr ss : [esp+0xB4]
        mov eax, dword ptr ds : [esi+8]
        add esp, 0xC
        push edx
        push eax
        push edi
        lea ecx, ss:[esp+0xAC]
        call public_6f93700
        public_6f92ad0 : nop
        mov ecx, esi
        call public_6f936a0
        imul eax, 0x108
        add eax, dword ptr ss : [esp+0xA4]
        jmp public_6f92b51
        public_6f92ae6 : nop
        mov eax, dword ptr ss : [esp+0xA8]
        mov ecx, dword ptr ss : [esp+0xA4]
        push eax
        push ecx
        lea ecx, ss:[esp+0xA8]
        call public_6f936d0
        mov edx, dword ptr ss : [esp+0xA4]
        push edx
        call public_6fa8fe0
        add esp, 4
        mov ecx, esi
        call public_6f936a0
        cmp eax, ebx
        jge public_6f92b1f
        xor eax, eax
        public_6f92b1f : nop
        imul eax, 0x108
        push eax
        call public_6fa912a
        mov ecx, dword ptr ds : [esi+8]
        mov esi, dword ptr ds : [esi+4]
        add esp, 4
        push eax
        push ecx
        push esi
        lea ecx, ss:[esp+0xAC]
        mov dword ptr ss : [esp+0xB0], eax
        call public_6f93700
        mov dword ptr ss : [esp+0xAC], eax
        public_6f92b51 : nop
        mov dword ptr ss : [esp+0xA8], eax
        public_6f92b58 : nop
        mov ecx, dword ptr ss : [ebp+0x4D8]
        mov edx, dword ptr ss : [ebp+0x4C8]
        mov eax, dword ptr ss : [ebp+0x4D0]
        mov dword ptr ss : [esp+0x90], ecx
        lea ecx, ss:[ebp+0x45C]
        mov dword ptr ss : [esp+0x94], edx
        mov dword ptr ss : [esp+0xB0], eax
        mov eax, dword ptr ss : [esp+0x130]
        push ecx
        lea edx, ss:[esp+0x134]
        push edx
        mov dword ptr ss : [esp+0xBC], eax
        mov byte ptr ss : [esp+0x5C], 1
        call dword ptr ds : [public_6fb3434]
        lea eax, ss:[esp+0xC4]
        push eax
        lea ecx, ss:[esp+0xA4]
        push ecx
        call dword ptr ds : [public_6fb34d4]
        add esp, 0x10
        cmp eax, ebx
        jne public_6f92d4c
        lea ecx, ss:[esp+0x18C]
        call dword ptr ds : [public_6fb3098]
        push ebx
/*FIXUP push offset public_6fb8ad8 @0x6f92bd6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8ad8
        call dword ptr ds : [public_6fb30b4]
        mov dword ptr ss : [esp+0x1A0], eax
        mov al, byte ptr ss : [ebp+0x3E0]
        add esp, 8
        cmp al, bl
        mov dword ptr ss : [esp+0x1A0], ebx
        mov dword ptr ss : [esp+0x19C], ebx
        je public_6f92c1c
        lea esi, ss:[ebp+8]
        mov ecx, 0xF6
        lea edi, ss:[esp+0x1A8]
        mov byte ptr ss : [esp+0x1A4], 1
        rep movsd
        public_6f92c1c : nop
        mov eax, dword ptr ss : [esp+0x98]
        lea edx, ss:[esp+0x18C]
        push edx
        push eax
        call dword ptr ds : [public_6fb363c]
        mov al, byte ptr ss : [ebp+0x4D8]
        add esp, 8
        test al, 1
        je public_6f92c62
        mov ecx, dword ptr ss : [ebp+0x4DC]
        mov eax, dword ptr ss : [esp+0x98]
        xor edx, edx
        mov dl, byte ptr ss : [ebp+0x4E0]
        push ecx
        push edx
        push 1
        push eax
        call dword ptr ds : [public_6fb3650]
        add esp, 0x10
        public_6f92c62 : nop
        fld dword ptr ss : [esp+0x94]
        fcomp dword ptr ds : [public_6fbc2e8]
        fnstsw ax
        test ah, 0x44
        jnp public_6f92cc4
        mov ecx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [ecx+0x88]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x74]
        mov edi, eax
        mov esi, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f92cc4
        mov ebp, dword ptr ds : [public_6fb33f4]
        public_6f92c95 : nop
        mov ecx, dword ptr ds : [esi]
        call public_6f33f80
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [esp+0x94]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x138]
        push edx
        call ebp
        mov eax, dword ptr ds : [edi+8]
        add esi, 4
        add esp, 0xC
        cmp esi, eax
        jne public_6f92c95
        public_6f92cc4 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ds : [eax+0x58]
        push 0x68
        call public_6fa912a
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], esi
        cmp esi, ebx
        mov byte ptr ss : [esp+0x588], 3
        je public_6f92d0f
        lea ecx, ss:[esp+0x50]
        push ecx
        mov ecx, esi
        call public_6f91310
        mov edx, dword ptr ss : [esp+0xB0]
        mov dword ptr ds : [esi+0x60], edx
        mov eax, dword ptr ss : [esp+0xB4]
        mov dword ptr ds : [esi+0x64], eax
        mov dword ptr ds : [esi], offset public_6fbc800
        jmp public_6f92d11
        public_6f92d0f : nop
        xor esi, esi
        public_6f92d11 : nop
        mov eax, dword ptr ds : [edi+0x28]
        lea ecx, ds:[edi+0x24]
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        mov byte ptr ss : [esp+0x594], 2
        mov dword ptr ss : [esp+0x20], esi
        call public_6f1e390
        mov ecx, dword ptr ss : [esp+0x98]
        push ecx
        mov ecx, dword ptr ss : [esp+0xBC]
        call public_6f743e0
        mov byte ptr ss : [esp+0x13], 1
        public_6f92d4c : nop
        mov edx, dword ptr ss : [esp+0xA8]
        mov eax, dword ptr ss : [esp+0xA4]
        push edx
        push eax
        lea ecx, ss:[esp+0xA8]
        mov byte ptr ss : [esp+0x590], bl
        mov dword ptr ss : [esp+0x58], offset public_6fbc7c8
        call public_6f936d0
        mov ecx, dword ptr ss : [esp+0xA4]
        push ecx
        call public_6fa8fe0
        add esp, 4
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0xA4], ebx
        mov dword ptr ss : [esp+0xA8], ebx
        mov dword ptr ss : [esp+0xAC], ebx
        mov dword ptr ss : [esp+0x588], 0xFFFFFFFF
        call dword ptr ds : [public_6fb3034]
        mov al, byte ptr ss : [esp+0x13]
        pop esi
        pop ebp
        public_6f92db7 : nop
        mov ecx, dword ptr ss : [esp+0x578]
        pop edi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x57C
        ret 4
        UNREACHABLE_TRAP(0x6f926b0)
    }
}

#undef public_6f927b0
#undef public_6f927ed
#undef public_6f927ef
#undef public_6f92870
#undef public_6f929d6
#undef public_6f929ea
#undef public_6f92a11
#undef public_6f92a29
#undef public_6f92a68
#undef public_6f92ad0
#undef public_6f92ae6
#undef public_6f92b1f
#undef public_6f92b51
#undef public_6f92b58
#undef public_6f92c1c
#undef public_6f92c62
#undef public_6f92c95
#undef public_6f92cc4
#undef public_6f92d0f
#undef public_6f92d11
#undef public_6f92d4c
#undef public_6f92db7
