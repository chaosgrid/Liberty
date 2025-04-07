#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef6790);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ef67c0 _public_6ef67c0
#define public_6ef67c2 _public_6ef67c2
#define public_6ef67ca _public_6ef67ca
#define public_6ef67cc _public_6ef67cc
#define public_6ef67d8 _public_6ef67d8
#define public_6ef67f2 _public_6ef67f2
#define public_6ef67fe _public_6ef67fe
#define public_6ef6804 _public_6ef6804
#define public_6ef6810 _public_6ef6810
#define public_6ef6819 _public_6ef6819
#define public_6ef6821 _public_6ef6821
#define public_6ef6833 _public_6ef6833
#define public_6ef683f _public_6ef683f
#define public_6ef6845 _public_6ef6845
#define public_6ef687c _public_6ef687c
#define public_6ef6895 _public_6ef6895
#define public_6ef68b0 _public_6ef68b0
#define public_6ef68bc _public_6ef68bc
#define public_6ef68c2 _public_6ef68c2
#define public_6ef68d1 _public_6ef68d1
#define public_6ef68dd _public_6ef68dd
#define public_6ef68e1 _public_6ef68e1
#define public_6ef68f0 _public_6ef68f0
#define public_6ef68fb _public_6ef68fb
#define public_6ef6910 _public_6ef6910
#define public_6ef691c _public_6ef691c
#define public_6ef6922 _public_6ef6922
#define public_6ef6930 _public_6ef6930
#define public_6ef693f _public_6ef693f
#define public_6ef6950 _public_6ef6950
#define public_6ef6959 _public_6ef6959
#define public_6ef695d _public_6ef695d
#define public_6ef6960 _public_6ef6960

PROC_DECLARE(0x6ef6790, internal_6ef6790, public_6ef6790);
extern "C" NAKED register_t __cdecl internal_6ef6790()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+0xC]
        sub ecx, eax
        cmp ecx, ebx
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        jae public_6ef6895
        mov edx, dword ptr ss : [ebp+4]
        test edx, edx
        je public_6ef67c0
        mov ecx, eax
        sub ecx, edx
        cmp ebx, ecx
        jb public_6ef67c2
        public_6ef67c0 : nop
        mov ecx, ebx
        public_6ef67c2 : nop
        test edx, edx
        jne public_6ef67ca
        xor eax, eax
        jmp public_6ef67cc
        public_6ef67ca : nop
        sub eax, edx
        public_6ef67cc : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6ef67d8
        xor eax, eax
        public_6ef67d8 : nop
        push eax
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x24], eax
        mov ecx, eax
        mov eax, dword ptr ss : [ebp+4]
        add esp, 4
        cmp eax, edi
        je public_6ef6804
        public_6ef67f2 : nop
        test ecx, ecx
        je public_6ef67fe
        mov dl, byte ptr ds : [eax]
        mov ebp, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [ecx], dl
        public_6ef67fe : nop
        inc ecx
        inc eax
        cmp eax, edi
        jne public_6ef67f2
        public_6ef6804 : nop
        test ebx, ebx
        mov eax, ecx
        jbe public_6ef6821
        mov ebp, dword ptr ss : [esp+0x24]
        mov esi, ebx
        public_6ef6810 : nop
        test eax, eax
        je public_6ef6819
        mov dl, byte ptr ss : [ebp]
        mov byte ptr ds : [eax], dl
        public_6ef6819 : nop
        inc eax
        dec esi
        jne public_6ef6810
        mov ebp, dword ptr ss : [esp+0x10]
        public_6ef6821 : nop
        mov esi, dword ptr ss : [ebp+8]
        cmp edi, esi
        lea edx, ds:[ecx+ebx]
        je public_6ef6845
        mov eax, edx
        sub eax, ecx
        sub eax, ebx
        add eax, edi
        public_6ef6833 : nop
        test edx, edx
        je public_6ef683f
        mov cl, byte ptr ds : [eax]
        mov ebp, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [edx], cl
        public_6ef683f : nop
        inc edx
        inc eax
        cmp eax, esi
        jne public_6ef6833
        public_6ef6845 : nop
        mov edx, dword ptr ss : [ebp+4]
        push edx
        call public_6fa8fe0
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ds:[edx+eax]
        mov dword ptr ss : [ebp+0xC], ecx
        mov ecx, dword ptr ss : [ebp+4]
        add esp, 4
        test ecx, ecx
        jne public_6ef687c
        xor eax, eax
        pop edi
        mov eax, edx
        add eax, ebx
        pop esi
        mov dword ptr ss : [ebp+4], edx
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6ef687c : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ecx
        pop edi
        add eax, edx
        add eax, ebx
        pop esi
        mov dword ptr ss : [ebp+4], edx
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6ef6895 : nop
        mov esi, dword ptr ss : [esp+0x1C]
        mov edx, eax
        sub edx, esi
        cmp edx, ebx
        jae public_6ef68fb
        cmp esi, eax
        lea edi, ds:[esi+ebx]
        je public_6ef68c2
        mov ecx, edi
        sub ecx, ebx
        lea esp, ss:[esp]
        public_6ef68b0 : nop
        test edi, edi
        je public_6ef68bc
        mov dl, byte ptr ds : [ecx]
        mov ebp, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [edi], dl
        public_6ef68bc : nop
        inc edi
        inc ecx
        cmp ecx, eax
        jne public_6ef68b0
        public_6ef68c2 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov edi, dword ptr ss : [esp+0x24]
        mov eax, esi
        sub eax, ecx
        add eax, ebx
        je public_6ef68e1
        public_6ef68d1 : nop
        test ecx, ecx
        je public_6ef68dd
        mov dl, byte ptr ds : [edi]
        mov ebp, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [ecx], dl
        public_6ef68dd : nop
        inc ecx
        dec eax
        jne public_6ef68d1
        public_6ef68e1 : nop
        mov ecx, dword ptr ss : [ebp+8]
        cmp esi, ecx
        mov eax, esi
        je public_6ef695d
        lea ebx, ds:[ebx]
        public_6ef68f0 : nop
        mov dl, byte ptr ds : [edi]
        mov byte ptr ds : [eax], dl
        inc eax
        cmp eax, ecx
        jne public_6ef68f0
        jmp public_6ef6959
        public_6ef68fb : nop
        test ebx, ebx
        jbe public_6ef6960
        mov ecx, eax
        sub ecx, ebx
        cmp ecx, eax
        mov edi, eax
        je public_6ef6922
        lea esp, ss:[esp]
        public_6ef6910 : nop
        test edi, edi
        je public_6ef691c
        mov dl, byte ptr ds : [ecx]
        mov ebp, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [edi], dl
        public_6ef691c : nop
        inc edi
        inc ecx
        cmp ecx, eax
        jne public_6ef6910
        public_6ef6922 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, ecx
        sub eax, ebx
        cmp esi, eax
        je public_6ef693f
        lea ecx, ds:[ecx]
        public_6ef6930 : nop
        mov dl, byte ptr ds : [eax-1]
        dec eax
        dec ecx
        cmp eax, esi
        mov byte ptr ds : [ecx], dl
        jne public_6ef6930
        mov ebp, dword ptr ss : [esp+0x10]
        public_6ef693f : nop
        lea ecx, ds:[esi+ebx]
        cmp esi, ecx
        mov eax, esi
        je public_6ef695d
        mov esi, dword ptr ss : [esp+0x24]
        lea esp, ss:[esp]
        public_6ef6950 : nop
        mov dl, byte ptr ds : [esi]
        mov byte ptr ds : [eax], dl
        inc eax
        cmp eax, ecx
        jne public_6ef6950
        public_6ef6959 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        public_6ef695d : nop
        add dword ptr ss : [ebp+8], ebx
        public_6ef6960 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6ef6790)
    }
}

#undef public_6ef67c0
#undef public_6ef67c2
#undef public_6ef67ca
#undef public_6ef67cc
#undef public_6ef67d8
#undef public_6ef67f2
#undef public_6ef67fe
#undef public_6ef6804
#undef public_6ef6810
#undef public_6ef6819
#undef public_6ef6821
#undef public_6ef6833
#undef public_6ef683f
#undef public_6ef6845
#undef public_6ef687c
#undef public_6ef6895
#undef public_6ef68b0
#undef public_6ef68bc
#undef public_6ef68c2
#undef public_6ef68d1
#undef public_6ef68dd
#undef public_6ef68e1
#undef public_6ef68f0
#undef public_6ef68fb
#undef public_6ef6910
#undef public_6ef691c
#undef public_6ef6922
#undef public_6ef6930
#undef public_6ef693f
#undef public_6ef6950
#undef public_6ef6959
#undef public_6ef695d
#undef public_6ef6960
