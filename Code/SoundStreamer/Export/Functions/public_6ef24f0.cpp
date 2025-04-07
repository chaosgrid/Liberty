#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef2090);
CLANG_FORWARD_PROC_SYMBOL(public_6ef2190);
CLANG_FORWARD_PROC_SYMBOL(public_6ef23c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef2440);
CLANG_FORWARD_PROC_SYMBOL(public_6ef24f0);

#define public_6ef2523 _public_6ef2523
#define public_6ef2581 _public_6ef2581
#define public_6ef259f _public_6ef259f
#define public_6ef25c9 _public_6ef25c9
#define public_6ef25e7 _public_6ef25e7
#define public_6ef25e9 _public_6ef25e9
#define public_6ef260a _public_6ef260a
#define public_6ef262c _public_6ef262c
#define public_6ef2634 _public_6ef2634
#define public_6ef267c _public_6ef267c
#define public_6ef26b5 _public_6ef26b5
#define public_6ef26d3 _public_6ef26d3
#define public_6ef26fd _public_6ef26fd
#define public_6ef271b _public_6ef271b
#define public_6ef271d _public_6ef271d
#define public_6ef2732 _public_6ef2732
#define public_6ef273a _public_6ef273a
#define public_6ef2751 _public_6ef2751
#define public_6ef275a _public_6ef275a
#define public_6ef2760 _public_6ef2760
#define public_6ef2792 _public_6ef2792
#define public_6ef2798 _public_6ef2798

PROC_DECLARE(0x6ef24f0, internal_6ef24f0, public_6ef24f0);
extern "C" NAKED register_t __cdecl internal_6ef24f0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x28]
        xor ebx, ebx
        cmp eax, ebx
        push esi
        push edi
        je public_6ef2798
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        je public_6ef2798
        mov eax, dword ptr ss : [ebp+0xC0]
        cmp eax, dword ptr ss : [ebp+0xBC]
        jb public_6ef2523
        mov dword ptr ss : [ebp+0xC0], ebx
        public_6ef2523 : nop
        cmp dword ptr ss : [ebp+0xA8], ebx
        je public_6ef2634
        mov edx, dword ptr ss : [ebp+0xB0]
        cmp edx, dword ptr ss : [ebp+0xB4]
        sbb al, al
        inc al
        test al, al
        jne public_6ef2634
        push ecx
        mov ecx, ebp
        call public_6ef23c0
        test al, al
        je public_6ef2798
        mov esi, dword ptr ss : [ebp+0xA8]
        cmp esi, ebx
        mov edi, dword ptr ss : [ebp+0x100]
        je public_6ef259f
        mov edx, dword ptr ss : [ebp+0xB0]
        mov ecx, dword ptr ss : [ebp+0xB4]
        mov eax, dword ptr ss : [ebp+0x104]
        sub ecx, edx
        cmp eax, ecx
        jbe public_6ef2581
        mov eax, ecx
        public_6ef2581 : nop
        cmp eax, ebx
        jbe public_6ef259f
        add esi, edx
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        add dword ptr ss : [ebp+0xB0], eax
        mov ebx, eax
        public_6ef259f : nop
        mov esi, dword ptr ss : [ebp+0xA8]
        test esi, esi
        mov edi, dword ptr ss : [ebp+0x108]
        je public_6ef25e7
        mov edx, dword ptr ss : [ebp+0xB0]
        mov ecx, dword ptr ss : [ebp+0xB4]
        mov eax, dword ptr ss : [ebp+0x10C]
        sub ecx, edx
        cmp eax, ecx
        jbe public_6ef25c9
        mov eax, ecx
        public_6ef25c9 : nop
        test eax, eax
        jbe public_6ef25e7
        add esi, edx
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        add dword ptr ss : [ebp+0xB0], eax
        jmp public_6ef25e9
        public_6ef25e7 : nop
        xor eax, eax
        public_6ef25e9 : nop
        push eax
        push ebx
        mov ecx, ebp
        call public_6ef2440
        mov esi, eax
        mov eax, dword ptr ss : [ebp+0x40]
        test eax, eax
        jbe public_6ef260a
        push eax
        mov ecx, ebp
        call public_6ef2090
        mov dword ptr ss : [ebp+0x40], 0
        public_6ef260a : nop
        mov eax, dword ptr ss : [ebp+0xA8]
        test eax, eax
        je public_6ef262c
        mov eax, dword ptr ss : [ebp+0xB0]
        cmp eax, dword ptr ss : [ebp+0xB4]
        sbb al, al
        inc al
        test al, al
        je public_6ef2798
        public_6ef262c : nop
        mov ecx, dword ptr ss : [esp+0x14]
        sub ecx, esi
        xor ebx, ebx
        public_6ef2634 : nop
        cmp ecx, ebx
        jbe public_6ef2798
        push ecx
        mov ecx, ebp
        call public_6ef23c0
        test al, al
        je public_6ef2798
        mov eax, dword ptr ss : [ebp+0x104]
        mov ecx, dword ptr ss : [ebp+0xAC]
        cmp eax, ecx
        mov byte ptr ss : [esp+0x14], 1
        jae public_6ef273a
        push ecx
        mov ecx, dword ptr ss : [ebp+0xA8]
        push ecx
        mov ecx, ebp
        call public_6ef2190
        test al, al
        jne public_6ef267c
        mov byte ptr ss : [esp+0x14], al
        public_6ef267c : nop
        mov eax, dword ptr ss : [ebp+0x50]
        cmp eax, ebx
        jbe public_6ef2732
        mov edi, dword ptr ss : [ebp+0x100]
        mov dword ptr ss : [ebp+0xB0], ebx
        mov dword ptr ss : [ebp+0xB4], eax
        mov esi, dword ptr ss : [ebp+0xA8]
        cmp esi, ebx
        je public_6ef26d3
        mov ecx, eax
        mov eax, dword ptr ss : [ebp+0x104]
        mov edx, ebx
        sub ecx, edx
        cmp eax, ecx
        jbe public_6ef26b5
        mov eax, ecx
        public_6ef26b5 : nop
        cmp eax, ebx
        jbe public_6ef26d3
        add esi, edx
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        add dword ptr ss : [ebp+0xB0], eax
        mov ebx, eax
        public_6ef26d3 : nop
        mov esi, dword ptr ss : [ebp+0xA8]
        test esi, esi
        mov edi, dword ptr ss : [ebp+0x108]
        je public_6ef271b
        mov edx, dword ptr ss : [ebp+0xB0]
        mov ecx, dword ptr ss : [ebp+0xB4]
        mov eax, dword ptr ss : [ebp+0x10C]
        sub ecx, edx
        cmp eax, ecx
        jbe public_6ef26fd
        mov eax, ecx
        public_6ef26fd : nop
        test eax, eax
        jbe public_6ef271b
        add esi, edx
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        add dword ptr ss : [ebp+0xB0], eax
        jmp public_6ef271d
        public_6ef271b : nop
        xor eax, eax
        public_6ef271d : nop
        mov dword ptr ss : [ebp+0x10C], eax
        add eax, ebx
        mov dword ptr ss : [ebp+0x104], ebx
        mov dword ptr ss : [ebp+0x50], eax
        xor ebx, ebx
        jmp public_6ef2760
        public_6ef2732 : nop
        mov dword ptr ss : [ebp+0x104], ebx
        jmp public_6ef275a
        public_6ef273a : nop
        push eax
        mov eax, dword ptr ss : [ebp+0x100]
        push eax
        mov ecx, ebp
        call public_6ef2190
        test al, al
        jne public_6ef2751
        mov byte ptr ss : [esp+0x14], al
        public_6ef2751 : nop
        mov ecx, dword ptr ss : [ebp+0x50]
        mov dword ptr ss : [ebp+0x104], ecx
        public_6ef275a : nop
        mov dword ptr ss : [ebp+0x10C], ebx
        public_6ef2760 : nop
        mov edx, dword ptr ss : [ebp+0x10C]
        mov eax, dword ptr ss : [ebp+0x104]
        push edx
        push eax
        mov ecx, ebp
        call public_6ef2440
        mov al, byte ptr ss : [esp+0x14]
        test al, al
        je public_6ef2798
        mov eax, dword ptr ss : [ebp+0x40]
        cmp eax, ebx
        jbe public_6ef2792
        push eax
        mov ecx, ebp
        call public_6ef2090
        mov dword ptr ss : [ebp+0x3C], ebx
        mov dword ptr ss : [ebp+0x40], ebx
        public_6ef2792 : nop
        mov dword ptr ss : [ebp+0x4C], ebx
        mov dword ptr ss : [ebp+0x50], ebx
        public_6ef2798 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ef24f0)
    }
}

#undef public_6ef2523
#undef public_6ef2581
#undef public_6ef259f
#undef public_6ef25c9
#undef public_6ef25e7
#undef public_6ef25e9
#undef public_6ef260a
#undef public_6ef262c
#undef public_6ef2634
#undef public_6ef267c
#undef public_6ef26b5
#undef public_6ef26d3
#undef public_6ef26fd
#undef public_6ef271b
#undef public_6ef271d
#undef public_6ef2732
#undef public_6ef273a
#undef public_6ef2751
#undef public_6ef275a
#undef public_6ef2760
#undef public_6ef2792
#undef public_6ef2798
