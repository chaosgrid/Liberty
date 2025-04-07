#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d48612);

#define public_6d48657 _public_6d48657
#define public_6d48691 _public_6d48691
#define public_6d486ae _public_6d486ae
#define public_6d486c0 _public_6d486c0
#define public_6d486c3 _public_6d486c3
#define public_6d486cd _public_6d486cd
#define public_6d486f2 _public_6d486f2
#define public_6d4871a _public_6d4871a
#define public_6d48725 _public_6d48725
#define public_6d48728 _public_6d48728
#define public_6d48737 _public_6d48737
#define public_6d4873a _public_6d4873a
#define public_6d48744 _public_6d48744
#define public_6d48769 _public_6d48769
#define public_6d48791 _public_6d48791
#define public_6d4879c _public_6d4879c
#define public_6d4879e _public_6d4879e
#define public_6d487ad _public_6d487ad
#define public_6d487b0 _public_6d487b0
#define public_6d487b7 _public_6d487b7
#define public_6d487d8 _public_6d487d8
#define public_6d48800 _public_6d48800
#define public_6d4880b _public_6d4880b
#define public_6d4880c _public_6d4880c
#define public_6d4881b _public_6d4881b
#define public_6d4881e _public_6d4881e
#define public_6d48823 _public_6d48823
#define public_6d48824 _public_6d48824

PROC_DECLARE(0x6d48612, internal_6d48612, public_6d48612);
extern "C" NAKED register_t __cdecl internal_6d48612()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        cmp dword ptr ss : [ebp+0x10], 0xFF
        mov eax, dword ptr ss : [ebp+8]
        movzx ecx, byte ptr ds : [eax+0xFB]
        push esi
        push edi
        jne public_6d48657
        imul ecx, dword ptr ds : [eax+0xB8]
        mov esi, dword ptr ds : [eax+0xDC]
        mov edi, dword ptr ss : [ebp+0xC]
        add ecx, 7
        shr ecx, 3
        mov eax, ecx
        shr ecx, 2
        inc esi
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        jmp public_6d48824
        public_6d48657 : nop
        mov edx, ecx
        dec edx
        push ebx
        je public_6d487b7
        dec edx
        je public_6d48744
        dec edx
        dec edx
        je public_6d486cd
        mov edx, dword ptr ds : [eax+0xDC]
        mov eax, dword ptr ds : [eax+0xB8]
        mov ebx, dword ptr ss : [ebp+0xC]
        shr ecx, 3
        inc edx
        test eax, eax
        mov dword ptr ss : [ebp-8], ecx
        mov byte ptr ss : [ebp-1], 0x80
        jbe public_6d48823
        mov dword ptr ss : [ebp-0xC], eax
        public_6d48691 : nop
        mov al, byte ptr ss : [ebp+0x10]
        test byte ptr ss : [ebp-1], al
        je public_6d486ae
        mov ecx, dword ptr ss : [ebp-8]
        mov eax, ecx
        shr ecx, 2
        mov esi, edx
        mov edi, ebx
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        public_6d486ae : nop
        add edx, dword ptr ss : [ebp-8]
        add ebx, dword ptr ss : [ebp-8]
        cmp byte ptr ss : [ebp-1], 1
        jne public_6d486c0
        mov byte ptr ss : [ebp-1], 0x80
        jmp public_6d486c3
        public_6d486c0 : nop
        shr byte ptr ss : [ebp-1], 1
        public_6d486c3 : nop
        dec dword ptr ss : [ebp-0xC]
        jne public_6d48691
        jmp public_6d48823
        public_6d486cd : nop
        mov esi, dword ptr ds : [eax+0xDC]
        mov eax, dword ptr ds : [eax+0xB8]
        mov edi, dword ptr ss : [ebp+0xC]
        inc esi
        test eax, eax
        push 4
        mov dword ptr ss : [ebp-8], 0x80
        pop edx
        jbe public_6d48823
        mov dword ptr ss : [ebp-0xC], eax
        public_6d486f2 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        test dword ptr ss : [ebp-8], eax
        je public_6d4871a
        movzx eax, byte ptr ds : [esi]
        mov cl, dl
        shr eax, cl
        push 4
        pop ecx
        sub ecx, edx
        mov ebx, 0xF0F
        sar ebx, cl
        and eax, 0xF
        mov ecx, edx
        shl al, cl
        and bl, byte ptr ds : [edi]
        or bl, al
        mov byte ptr ds : [edi], bl
        public_6d4871a : nop
        test edx, edx
        jne public_6d48725
        push 4
        inc esi
        pop edx
        inc edi
        jmp public_6d48728
        public_6d48725 : nop
        sub edx, 4
        public_6d48728 : nop
        cmp dword ptr ss : [ebp-8], 1
        jne public_6d48737
        mov dword ptr ss : [ebp-8], 0x80
        jmp public_6d4873a
        public_6d48737 : nop
        sar dword ptr ss : [ebp-8], 1
        public_6d4873a : nop
        dec dword ptr ss : [ebp-0xC]
        jne public_6d486f2
        jmp public_6d48823
        public_6d48744 : nop
        mov esi, dword ptr ds : [eax+0xDC]
        mov eax, dword ptr ds : [eax+0xB8]
        mov edi, dword ptr ss : [ebp+0xC]
        inc esi
        test eax, eax
        push 6
        mov dword ptr ss : [ebp-8], 0x80
        pop edx
        jbe public_6d48823
        mov dword ptr ss : [ebp-0xC], eax
        public_6d48769 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        test dword ptr ss : [ebp-8], eax
        je public_6d48791
        movzx eax, byte ptr ds : [esi]
        mov cl, dl
        shr eax, cl
        push 6
        pop ecx
        sub ecx, edx
        mov ebx, 0x3F3F
        sar ebx, cl
        and eax, 3
        mov ecx, edx
        shl al, cl
        and bl, byte ptr ds : [edi]
        or bl, al
        mov byte ptr ds : [edi], bl
        public_6d48791 : nop
        test edx, edx
        jne public_6d4879c
        push 6
        inc esi
        pop edx
        inc edi
        jmp public_6d4879e
        public_6d4879c : nop
        dec edx
        dec edx
        public_6d4879e : nop
        cmp dword ptr ss : [ebp-8], 1
        jne public_6d487ad
        mov dword ptr ss : [ebp-8], 0x80
        jmp public_6d487b0
        public_6d487ad : nop
        sar dword ptr ss : [ebp-8], 1
        public_6d487b0 : nop
        dec dword ptr ss : [ebp-0xC]
        jne public_6d48769
        jmp public_6d48823
        public_6d487b7 : nop
        mov esi, dword ptr ds : [eax+0xDC]
        mov eax, dword ptr ds : [eax+0xB8]
        mov edi, dword ptr ss : [ebp+0xC]
        inc esi
        test eax, eax
        push 7
        mov dword ptr ss : [ebp-8], 0x80
        pop edx
        jbe public_6d48823
        mov dword ptr ss : [ebp-0xC], eax
        public_6d487d8 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        test dword ptr ss : [ebp-8], eax
        je public_6d48800
        movzx eax, byte ptr ds : [esi]
        mov cl, dl
        shr eax, cl
        push 7
        pop ecx
        sub ecx, edx
        mov ebx, 0x7F7F
        sar ebx, cl
        and eax, 1
        mov ecx, edx
        shl al, cl
        and bl, byte ptr ds : [edi]
        or bl, al
        mov byte ptr ds : [edi], bl
        public_6d48800 : nop
        test edx, edx
        jne public_6d4880b
        push 7
        inc esi
        pop edx
        inc edi
        jmp public_6d4880c
        public_6d4880b : nop
        dec edx
        public_6d4880c : nop
        cmp dword ptr ss : [ebp-8], 1
        jne public_6d4881b
        mov dword ptr ss : [ebp-8], 0x80
        jmp public_6d4881e
        public_6d4881b : nop
        sar dword ptr ss : [ebp-8], 1
        public_6d4881e : nop
        dec dword ptr ss : [ebp-0xC]
        jne public_6d487d8
        public_6d48823 : nop
        pop ebx
        public_6d48824 : nop
        pop edi
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d48612)
    }
}

#undef public_6d48657
#undef public_6d48691
#undef public_6d486ae
#undef public_6d486c0
#undef public_6d486c3
#undef public_6d486cd
#undef public_6d486f2
#undef public_6d4871a
#undef public_6d48725
#undef public_6d48728
#undef public_6d48737
#undef public_6d4873a
#undef public_6d48744
#undef public_6d48769
#undef public_6d48791
#undef public_6d4879c
#undef public_6d4879e
#undef public_6d487ad
#undef public_6d487b0
#undef public_6d487b7
#undef public_6d487d8
#undef public_6d48800
#undef public_6d4880b
#undef public_6d4880c
#undef public_6d4881b
#undef public_6d4881e
#undef public_6d48823
#undef public_6d48824
