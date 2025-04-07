#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d48828);

#define public_6d48899 _public_6d48899
#define public_6d488b9 _public_6d488b9
#define public_6d488d8 _public_6d488d8
#define public_6d488ed _public_6d488ed
#define public_6d4892d _public_6d4892d
#define public_6d48945 _public_6d48945
#define public_6d48948 _public_6d48948
#define public_6d4896c _public_6d4896c
#define public_6d48970 _public_6d48970
#define public_6d48975 _public_6d48975
#define public_6d48982 _public_6d48982
#define public_6d48986 _public_6d48986
#define public_6d48998 _public_6d48998
#define public_6d489d4 _public_6d489d4
#define public_6d489ec _public_6d489ec
#define public_6d489ef _public_6d489ef
#define public_6d48a13 _public_6d48a13
#define public_6d48a17 _public_6d48a17
#define public_6d48a1c _public_6d48a1c
#define public_6d48a29 _public_6d48a29
#define public_6d48a2d _public_6d48a2d
#define public_6d48a3f _public_6d48a3f
#define public_6d48a73 _public_6d48a73
#define public_6d48a8b _public_6d48a8b
#define public_6d48a8e _public_6d48a8e
#define public_6d48ab2 _public_6d48ab2
#define public_6d48ab5 _public_6d48ab5
#define public_6d48aba _public_6d48aba
#define public_6d48ac7 _public_6d48ac7
#define public_6d48aca _public_6d48aca
#define public_6d48ad7 _public_6d48ad7
#define public_6d48aee _public_6d48aee
#define public_6d48aef _public_6d48aef

PROC_DECLARE(0x6d48828, internal_6d48828, public_6d48828);
extern "C" NAKED register_t __cdecl internal_6d48828()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x18
        mov ecx, dword ptr ss : [ebp+0xC]
        test ecx, ecx
        je public_6d48aef
        push edi
        mov edi, dword ptr ss : [ebp+8]
        test edi, edi
        je public_6d48aee
        mov eax, dword ptr ss : [ebp+0x10]
        push ebx
        push esi
        mov esi, dword ptr ds : [eax*4+public_6d6159c]
        mov eax, dword ptr ds : [edi]
        mov edx, eax
        imul edx, esi
        mov dword ptr ss : [ebp-0xC], esi
        movzx esi, byte ptr ds : [edi+0xB]
        mov edi, esi
        dec edi
        je public_6d48a3f
        dec edi
        je public_6d48998
        dec edi
        dec edi
        je public_6d488ed
        and dword ptr ss : [ebp-4], 0
        shr esi, 3
        lea ebx, ds:[eax-1]
        imul ebx, esi
        add ebx, ecx
        lea ecx, ds:[edx-1]
        imul ecx, esi
        add ecx, dword ptr ss : [ebp+0xC]
        test eax, eax
        mov dword ptr ss : [ebp-8], esi
        mov dword ptr ss : [ebp+0xC], ecx
        jbe public_6d48ad7
        public_6d48899 : nop
        mov ecx, dword ptr ss : [ebp-8]
        mov eax, ecx
        shr ecx, 2
        mov esi, ebx
        lea edi, ss:[ebp-0x18]
        rep movsd
        mov ecx, eax
        mov eax, dword ptr ss : [ebp-0xC]
        and ecx, 3
        test eax, eax
        rep movsb
        jle public_6d488d8
        mov dword ptr ss : [ebp-0x10], eax
        public_6d488b9 : nop
        mov ecx, dword ptr ss : [ebp-8]
        mov edi, dword ptr ss : [ebp+0xC]
        mov eax, ecx
        sub dword ptr ss : [ebp+0xC], eax
        shr ecx, 2
        lea esi, ss:[ebp-0x18]
        rep movsd
        mov ecx, eax
        and ecx, 3
        dec dword ptr ss : [ebp-0x10]
        rep movsb
        jne public_6d488b9
        public_6d488d8 : nop
        sub ebx, dword ptr ss : [ebp-8]
        inc dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp-4]
        cmp ecx, dword ptr ds : [eax]
        jb public_6d48899
        jmp public_6d48ad7
        public_6d488ed : nop
        and dword ptr ss : [ebp-0x10], 0
        lea edi, ds:[eax-1]
        lea esi, ds:[edx-1]
        shr edi, 1
        add edi, ecx
        shr esi, 1
        add esi, ecx
        lea ecx, ds:[eax-1]
        and ecx, 1
        shl ecx, 2
        mov ebx, ecx
        push 4
        pop ecx
        sub ecx, ebx
        mov dword ptr ss : [ebp-8], ecx
        lea ecx, ds:[edx-1]
        and ecx, 1
        shl ecx, 2
        mov ebx, ecx
        push 4
        pop ecx
        sub ecx, ebx
        test eax, eax
        mov dword ptr ss : [ebp-4], ecx
        jbe public_6d48ad7
        public_6d4892d : nop
        mov cl, byte ptr ss : [ebp-8]
        mov al, byte ptr ds : [edi]
        shr al, cl
        mov ecx, dword ptr ss : [ebp-0xC]
        and al, 0xF
        test ecx, ecx
        mov byte ptr ss : [ebp+0xF], al
        jle public_6d48975
        mov dword ptr ss : [ebp-0x14], ecx
        jmp public_6d48948
        public_6d48945 : nop
        mov al, byte ptr ss : [ebp+0xF]
        public_6d48948 : nop
        push 4
        pop ecx
        sub ecx, dword ptr ss : [ebp-4]
        mov ebx, 0xF0F
        sar ebx, cl
        mov ecx, dword ptr ss : [ebp-4]
        shl al, cl
        and bl, byte ptr ds : [esi]
        or bl, al
        cmp ecx, 4
        mov byte ptr ds : [esi], bl
        jne public_6d4896c
        and dword ptr ss : [ebp-4], 0
        dec esi
        jmp public_6d48970
        public_6d4896c : nop
        add dword ptr ss : [ebp-4], 4
        public_6d48970 : nop
        dec dword ptr ss : [ebp-0x14]
        jne public_6d48945
        public_6d48975 : nop
        cmp dword ptr ss : [ebp-8], 4
        jne public_6d48982
        and dword ptr ss : [ebp-8], 0
        dec edi
        jmp public_6d48986
        public_6d48982 : nop
        add dword ptr ss : [ebp-8], 4
        public_6d48986 : nop
        inc dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp-0x10]
        cmp ecx, dword ptr ds : [eax]
        jb public_6d4892d
        jmp public_6d48ad7
        public_6d48998 : nop
        and dword ptr ss : [ebp-0x10], 0
        lea edi, ds:[eax-1]
        lea esi, ds:[edx-1]
        shr edi, 2
        add edi, ecx
        shr esi, 2
        add esi, ecx
        push 3
        lea ebx, ds:[eax-1]
        and ebx, 3
        pop ecx
        sub ecx, ebx
        shl ecx, 1
        mov dword ptr ss : [ebp-8], ecx
        lea ebx, ds:[edx-1]
        push 3
        and ebx, 3
        pop ecx
        sub ecx, ebx
        shl ecx, 1
        test eax, eax
        mov dword ptr ss : [ebp-4], ecx
        jbe public_6d48ad7
        public_6d489d4 : nop
        mov cl, byte ptr ss : [ebp-8]
        mov al, byte ptr ds : [edi]
        shr al, cl
        mov ecx, dword ptr ss : [ebp-0xC]
        and al, 3
        test ecx, ecx
        mov byte ptr ss : [ebp+0xF], al
        jle public_6d48a1c
        mov dword ptr ss : [ebp-0x14], ecx
        jmp public_6d489ef
        public_6d489ec : nop
        mov al, byte ptr ss : [ebp+0xF]
        public_6d489ef : nop
        push 6
        pop ecx
        sub ecx, dword ptr ss : [ebp-4]
        mov ebx, 0x3F3F
        sar ebx, cl
        mov ecx, dword ptr ss : [ebp-4]
        shl al, cl
        and bl, byte ptr ds : [esi]
        or bl, al
        cmp ecx, 6
        mov byte ptr ds : [esi], bl
        jne public_6d48a13
        and dword ptr ss : [ebp-4], 0
        dec esi
        jmp public_6d48a17
        public_6d48a13 : nop
        add dword ptr ss : [ebp-4], 2
        public_6d48a17 : nop
        dec dword ptr ss : [ebp-0x14]
        jne public_6d489ec
        public_6d48a1c : nop
        cmp dword ptr ss : [ebp-8], 6
        jne public_6d48a29
        and dword ptr ss : [ebp-8], 0
        dec edi
        jmp public_6d48a2d
        public_6d48a29 : nop
        add dword ptr ss : [ebp-8], 2
        public_6d48a2d : nop
        inc dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp-0x10]
        cmp ecx, dword ptr ds : [eax]
        jb public_6d489d4
        jmp public_6d48ad7
        public_6d48a3f : nop
        and dword ptr ss : [ebp-0x10], 0
        lea edi, ds:[eax-1]
        lea esi, ds:[edx-1]
        shr edi, 3
        add edi, ecx
        shr esi, 3
        add esi, ecx
        push 7
        lea ebx, ds:[eax-1]
        and ebx, 7
        pop ecx
        sub ecx, ebx
        mov dword ptr ss : [ebp-8], ecx
        lea ebx, ds:[edx-1]
        push 7
        and ebx, 7
        pop ecx
        sub ecx, ebx
        test eax, eax
        mov dword ptr ss : [ebp-4], ecx
        jbe public_6d48ad7
        public_6d48a73 : nop
        mov cl, byte ptr ss : [ebp-8]
        mov al, byte ptr ds : [edi]
        shr al, cl
        mov ecx, dword ptr ss : [ebp-0xC]
        and al, 1
        test ecx, ecx
        mov byte ptr ss : [ebp+0xF], al
        jle public_6d48aba
        mov dword ptr ss : [ebp-0x14], ecx
        jmp public_6d48a8e
        public_6d48a8b : nop
        mov al, byte ptr ss : [ebp+0xF]
        public_6d48a8e : nop
        push 7
        pop ecx
        sub ecx, dword ptr ss : [ebp-4]
        mov ebx, 0x7F7F
        sar ebx, cl
        mov ecx, dword ptr ss : [ebp-4]
        shl al, cl
        and bl, byte ptr ds : [esi]
        or bl, al
        cmp ecx, 7
        mov byte ptr ds : [esi], bl
        jne public_6d48ab2
        and dword ptr ss : [ebp-4], 0
        dec esi
        jmp public_6d48ab5
        public_6d48ab2 : nop
        inc dword ptr ss : [ebp-4]
        public_6d48ab5 : nop
        dec dword ptr ss : [ebp-0x14]
        jne public_6d48a8b
        public_6d48aba : nop
        cmp dword ptr ss : [ebp-8], 7
        jne public_6d48ac7
        and dword ptr ss : [ebp-8], 0
        dec edi
        jmp public_6d48aca
        public_6d48ac7 : nop
        inc dword ptr ss : [ebp-8]
        public_6d48aca : nop
        inc dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp-0x10]
        cmp ecx, dword ptr ds : [eax]
        jb public_6d48a73
        public_6d48ad7 : nop
        mov eax, dword ptr ss : [ebp+8]
        movzx ecx, byte ptr ds : [eax+0xB]
        imul ecx, edx
        add ecx, 7
        shr ecx, 3
        pop esi
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], ecx
        pop ebx
        public_6d48aee : nop
        pop edi
        public_6d48aef : nop
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d48828)
    }
}

#undef public_6d48899
#undef public_6d488b9
#undef public_6d488d8
#undef public_6d488ed
#undef public_6d4892d
#undef public_6d48945
#undef public_6d48948
#undef public_6d4896c
#undef public_6d48970
#undef public_6d48975
#undef public_6d48982
#undef public_6d48986
#undef public_6d48998
#undef public_6d489d4
#undef public_6d489ec
#undef public_6d489ef
#undef public_6d48a13
#undef public_6d48a17
#undef public_6d48a1c
#undef public_6d48a29
#undef public_6d48a2d
#undef public_6d48a3f
#undef public_6d48a73
#undef public_6d48a8b
#undef public_6d48a8e
#undef public_6d48ab2
#undef public_6d48ab5
#undef public_6d48aba
#undef public_6d48ac7
#undef public_6d48aca
#undef public_6d48ad7
#undef public_6d48aee
#undef public_6d48aef
