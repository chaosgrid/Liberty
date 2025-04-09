#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_487c30);
CLANG_FORWARD_PROC_SYMBOL(public_531930);
CLANG_FORWARD_PROC_SYMBOL(public_5adba0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5adbc4 _public_5adbc4
#define public_5adbe2 _public_5adbe2
#define public_5adbed _public_5adbed
#define public_5adbf6 _public_5adbf6
#define public_5adc01 _public_5adc01
#define public_5adc1d _public_5adc1d
#define public_5adc34 _public_5adc34
#define public_5adc41 _public_5adc41
#define public_5adc4c _public_5adc4c
#define public_5adc4f _public_5adc4f
#define public_5adc67 _public_5adc67
#define public_5adc72 _public_5adc72
#define public_5adc75 _public_5adc75
#define public_5adc8a _public_5adc8a
#define public_5adc95 _public_5adc95
#define public_5adca0 _public_5adca0
#define public_5adca3 _public_5adca3
#define public_5adcb7 _public_5adcb7
#define public_5adcc3 _public_5adcc3
#define public_5adccf _public_5adccf
#define public_5adcd2 _public_5adcd2
#define public_5adcf0 _public_5adcf0
#define public_5add2f _public_5add2f
#define public_5add42 _public_5add42
#define public_5add4d _public_5add4d
#define public_5add50 _public_5add50
#define public_5add5b _public_5add5b
#define public_5add6e _public_5add6e
#define public_5add95 _public_5add95
#define public_5addaf _public_5addaf
#define public_5addd5 _public_5addd5
#define public_5adde8 _public_5adde8
#define public_5addf5 _public_5addf5
#define public_5addf7 _public_5addf7
#define public_5ade02 _public_5ade02
#define public_5ade19 _public_5ade19
#define public_5ade31 _public_5ade31
#define public_5ade3e _public_5ade3e
#define public_5ade40 _public_5ade40
#define public_5ade4c _public_5ade4c
#define public_5ade76 _public_5ade76
#define public_5ade8e _public_5ade8e
#define public_5ade9e _public_5ade9e
#define public_5adea8 _public_5adea8
#define public_5adecb _public_5adecb
#define public_5adede _public_5adede
#define public_5adee9 _public_5adee9
#define public_5adeec _public_5adeec
#define public_5adef6 _public_5adef6
#define public_5adf1f _public_5adf1f
#define public_5adf32 _public_5adf32
#define public_5adf3f _public_5adf3f
#define public_5adf41 _public_5adf41
#define public_5adf44 _public_5adf44
#define public_5adf47 _public_5adf47
#define public_5adf4e _public_5adf4e

PROC_DECLARE(0x5adba0, internal_5adba0, public_5adba0);
extern "C" NAKED register_t __cdecl internal_5adba0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x1C]
        call public_531930
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_5adbe2
        mov eax, dword ptr ds : [esi+8]
        public_5adbc4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_5adc67
        mov dword ptr ds : [ecx+4], eax
        jmp public_5adc75
        public_5adbe2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_5adbed
        mov eax, edx
        jmp public_5adbc4
        public_5adbed : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x35]
        test bl, bl
        jne public_5adc01
        public_5adbf6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x35]
        test bl, bl
        je public_5adbf6
        public_5adc01 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_5adbc4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_5adc1d
        mov dword ptr ds : [eax+4], ecx
        jmp public_5adc34
        public_5adc1d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_5adc34 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_5adc41
        mov dword ptr ds : [edx+4], ecx
        jmp public_5adc4f
        public_5adc41 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_5adc4c
        mov dword ptr ds : [edx], ecx
        jmp public_5adc4f
        public_5adc4c : nop
        mov dword ptr ds : [edx+8], ecx
        public_5adc4f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x34]
        mov dl, byte ptr ds : [ecx+0x34]
        mov byte ptr ds : [ecx+0x34], bl
        mov byte ptr ds : [esi+0x34], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_5adcd2
        public_5adc67 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_5adc72
        mov dword ptr ds : [ecx], eax
        jmp public_5adc75
        public_5adc72 : nop
        mov dword ptr ds : [ecx+8], eax
        public_5adc75 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_5adca3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_5adc8a
        mov edx, dword ptr ds : [esi+4]
        jmp public_5adca0
        public_5adc8a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x35]
        test bl, bl
        mov edx, eax
        jne public_5adca0
        public_5adc95 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x35]
        test bl, bl
        je public_5adc95
        public_5adca0 : nop
        mov dword ptr ss : [ebp], edx
        public_5adca3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_5adcd2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_5adcb7
        mov edx, dword ptr ds : [esi+4]
        jmp public_5adccf
        public_5adcb7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x35]
        test bl, bl
        mov edx, eax
        jne public_5adccf
        public_5adcc3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x35]
        test bl, bl
        je public_5adcc3
        public_5adccf : nop
        mov dword ptr ss : [ebp+8], edx
        public_5adcd2 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x34]
        mov bl, 1
        cmp cl, bl
        jne public_5adf4e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_5adf47
        nop 
        public_5adcf0 : nop
        cmp byte ptr ds : [eax+0x34], bl
        jne public_5adf47
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_5addaf
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x34]
        test dl, dl
        jne public_5add5b
        mov byte ptr ds : [ecx+0x34], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x34], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_5add2f
        mov dword ptr ds : [esi+4], ecx
        public_5add2f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_5add42
        mov dword ptr ds : [esi+4], edx
        jmp public_5add50
        public_5add42 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_5add4d
        mov dword ptr ds : [esi], edx
        jmp public_5add50
        public_5add4d : nop
        mov dword ptr ds : [esi+8], edx
        public_5add50 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_5add5b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x34], bl
        jne public_5add6e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x34], bl
        je public_5ade19
        public_5add6e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x34], bl
        jne public_5ade4c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x34], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x34], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_5add95
        mov dword ptr ds : [esi+4], ecx
        public_5add95 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_5ade31
        mov dword ptr ds : [esi+4], edx
        jmp public_5ade40
        public_5addaf : nop
        mov dl, byte ptr ds : [ecx+0x34]
        test dl, dl
        jne public_5ade02
        mov byte ptr ds : [ecx+0x34], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x34], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_5addd5
        mov dword ptr ds : [esi+4], ecx
        public_5addd5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_5adde8
        mov dword ptr ds : [esi+4], edx
        jmp public_5addf7
        public_5adde8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_5addf5
        mov dword ptr ds : [esi+8], edx
        jmp public_5addf7
        public_5addf5 : nop
        mov dword ptr ds : [esi], edx
        public_5addf7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_5ade02 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x34], bl
        jne public_5adea8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x34], bl
        jne public_5adea8
        public_5ade19 : nop
        mov byte ptr ds : [ecx+0x34], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_5adcf0
        jmp public_5adf47
        public_5ade31 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_5ade3e
        mov dword ptr ds : [esi+8], edx
        jmp public_5ade40
        public_5ade3e : nop
        mov dword ptr ds : [esi], edx
        public_5ade40 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_5ade4c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x34]
        mov byte ptr ds : [ecx+0x34], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x34], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x34], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_5ade76
        mov dword ptr ds : [esi+4], ecx
        public_5ade76 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_5ade8e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_5adf44
        public_5ade8e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_5ade9e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_5adf44
        public_5ade9e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_5adf44
        public_5adea8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x34], bl
        jne public_5adef6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x34], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x34], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_5adecb
        mov dword ptr ds : [esi+4], ecx
        public_5adecb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_5adede
        mov dword ptr ds : [esi+4], edx
        jmp public_5adeec
        public_5adede : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_5adee9
        mov dword ptr ds : [esi], edx
        jmp public_5adeec
        public_5adee9 : nop
        mov dword ptr ds : [esi+8], edx
        public_5adeec : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_5adef6 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x34]
        mov byte ptr ds : [ecx+0x34], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x34], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x34], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_5adf1f
        mov dword ptr ds : [esi+4], ecx
        public_5adf1f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_5adf32
        mov dword ptr ds : [esi+4], edx
        jmp public_5adf41
        public_5adf32 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_5adf3f
        mov dword ptr ds : [esi+8], edx
        jmp public_5adf41
        public_5adf3f : nop
        mov dword ptr ds : [esi], edx
        public_5adf41 : nop
        mov dword ptr ds : [edx+8], ecx
        public_5adf44 : nop
        mov dword ptr ds : [ecx+4], edx
        public_5adf47 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x34], bl
        public_5adf4e : nop
        lea ecx, ds:[esi+0xC]
        call public_487c30
        push esi
        call public_5b7e1d
        mov eax, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x5adba0)
    }
}

#undef public_5adbc4
#undef public_5adbe2
#undef public_5adbed
#undef public_5adbf6
#undef public_5adc01
#undef public_5adc1d
#undef public_5adc34
#undef public_5adc41
#undef public_5adc4c
#undef public_5adc4f
#undef public_5adc67
#undef public_5adc72
#undef public_5adc75
#undef public_5adc8a
#undef public_5adc95
#undef public_5adca0
#undef public_5adca3
#undef public_5adcb7
#undef public_5adcc3
#undef public_5adccf
#undef public_5adcd2
#undef public_5adcf0
#undef public_5add2f
#undef public_5add42
#undef public_5add4d
#undef public_5add50
#undef public_5add5b
#undef public_5add6e
#undef public_5add95
#undef public_5addaf
#undef public_5addd5
#undef public_5adde8
#undef public_5addf5
#undef public_5addf7
#undef public_5ade02
#undef public_5ade19
#undef public_5ade31
#undef public_5ade3e
#undef public_5ade40
#undef public_5ade4c
#undef public_5ade76
#undef public_5ade8e
#undef public_5ade9e
#undef public_5adea8
#undef public_5adecb
#undef public_5adede
#undef public_5adee9
#undef public_5adeec
#undef public_5adef6
#undef public_5adf1f
#undef public_5adf32
#undef public_5adf3f
#undef public_5adf41
#undef public_5adf44
#undef public_5adf47
#undef public_5adf4e
