#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a3d00);
CLANG_FORWARD_PROC_SYMBOL(public_62a7500);
CLANG_FORWARD_PROC_SYMBOL(public_6312630);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62a7524 _public_62a7524
#define public_62a7542 _public_62a7542
#define public_62a754d _public_62a754d
#define public_62a7556 _public_62a7556
#define public_62a7561 _public_62a7561
#define public_62a757d _public_62a757d
#define public_62a7594 _public_62a7594
#define public_62a75a1 _public_62a75a1
#define public_62a75ac _public_62a75ac
#define public_62a75af _public_62a75af
#define public_62a75c7 _public_62a75c7
#define public_62a75d2 _public_62a75d2
#define public_62a75d5 _public_62a75d5
#define public_62a75ea _public_62a75ea
#define public_62a75f5 _public_62a75f5
#define public_62a7600 _public_62a7600
#define public_62a7603 _public_62a7603
#define public_62a7617 _public_62a7617
#define public_62a7623 _public_62a7623
#define public_62a762f _public_62a762f
#define public_62a7632 _public_62a7632
#define public_62a7650 _public_62a7650
#define public_62a768f _public_62a768f
#define public_62a76a2 _public_62a76a2
#define public_62a76ad _public_62a76ad
#define public_62a76b0 _public_62a76b0
#define public_62a76bb _public_62a76bb
#define public_62a76ce _public_62a76ce
#define public_62a76f5 _public_62a76f5
#define public_62a770f _public_62a770f
#define public_62a7735 _public_62a7735
#define public_62a7748 _public_62a7748
#define public_62a7755 _public_62a7755
#define public_62a7757 _public_62a7757
#define public_62a7762 _public_62a7762
#define public_62a7779 _public_62a7779
#define public_62a7791 _public_62a7791
#define public_62a779e _public_62a779e
#define public_62a77a0 _public_62a77a0
#define public_62a77ac _public_62a77ac
#define public_62a77d6 _public_62a77d6
#define public_62a77ee _public_62a77ee
#define public_62a77fe _public_62a77fe
#define public_62a7808 _public_62a7808
#define public_62a782b _public_62a782b
#define public_62a783e _public_62a783e
#define public_62a7849 _public_62a7849
#define public_62a784c _public_62a784c
#define public_62a7856 _public_62a7856
#define public_62a787f _public_62a787f
#define public_62a7892 _public_62a7892
#define public_62a789f _public_62a789f
#define public_62a78a1 _public_62a78a1
#define public_62a78a4 _public_62a78a4
#define public_62a78a7 _public_62a78a7
#define public_62a78ae _public_62a78ae

PROC_DECLARE(0x62a7500, internal_62a7500, public_62a7500);
extern "C" NAKED register_t __cdecl internal_62a7500()
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
        call public_6312630
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_62a7542
        mov eax, dword ptr ds : [esi+8]
        public_62a7524 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_62a75c7
        mov dword ptr ds : [ecx+4], eax
        jmp public_62a75d5
        public_62a7542 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_62a754d
        mov eax, edx
        jmp public_62a7524
        public_62a754d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x29]
        test bl, bl
        jne public_62a7561
        public_62a7556 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x29]
        test bl, bl
        je public_62a7556
        public_62a7561 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_62a7524
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_62a757d
        mov dword ptr ds : [eax+4], ecx
        jmp public_62a7594
        public_62a757d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_62a7594 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_62a75a1
        mov dword ptr ds : [edx+4], ecx
        jmp public_62a75af
        public_62a75a1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_62a75ac
        mov dword ptr ds : [edx], ecx
        jmp public_62a75af
        public_62a75ac : nop
        mov dword ptr ds : [edx+8], ecx
        public_62a75af : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x28]
        mov dl, byte ptr ds : [ecx+0x28]
        mov byte ptr ds : [ecx+0x28], bl
        mov byte ptr ds : [esi+0x28], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_62a7632
        public_62a75c7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_62a75d2
        mov dword ptr ds : [ecx], eax
        jmp public_62a75d5
        public_62a75d2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_62a75d5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_62a7603
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_62a75ea
        mov edx, dword ptr ds : [esi+4]
        jmp public_62a7600
        public_62a75ea : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x29]
        test bl, bl
        mov edx, eax
        jne public_62a7600
        public_62a75f5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x29]
        test bl, bl
        je public_62a75f5
        public_62a7600 : nop
        mov dword ptr ss : [ebp], edx
        public_62a7603 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_62a7632
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_62a7617
        mov edx, dword ptr ds : [esi+4]
        jmp public_62a762f
        public_62a7617 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x29]
        test bl, bl
        mov edx, eax
        jne public_62a762f
        public_62a7623 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x29]
        test bl, bl
        je public_62a7623
        public_62a762f : nop
        mov dword ptr ss : [ebp+8], edx
        public_62a7632 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x28]
        mov bl, 1
        cmp cl, bl
        jne public_62a78ae
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_62a78a7
        nop 
        public_62a7650 : nop
        cmp byte ptr ds : [eax+0x28], bl
        jne public_62a78a7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_62a770f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x28]
        test dl, dl
        jne public_62a76bb
        mov byte ptr ds : [ecx+0x28], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x28], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_62a768f
        mov dword ptr ds : [esi+4], ecx
        public_62a768f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62a76a2
        mov dword ptr ds : [esi+4], edx
        jmp public_62a76b0
        public_62a76a2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_62a76ad
        mov dword ptr ds : [esi], edx
        jmp public_62a76b0
        public_62a76ad : nop
        mov dword ptr ds : [esi+8], edx
        public_62a76b0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_62a76bb : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x28], bl
        jne public_62a76ce
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x28], bl
        je public_62a7779
        public_62a76ce : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x28], bl
        jne public_62a77ac
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x28], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x28], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_62a76f5
        mov dword ptr ds : [esi+4], ecx
        public_62a76f5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62a7791
        mov dword ptr ds : [esi+4], edx
        jmp public_62a77a0
        public_62a770f : nop
        mov dl, byte ptr ds : [ecx+0x28]
        test dl, dl
        jne public_62a7762
        mov byte ptr ds : [ecx+0x28], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x28], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_62a7735
        mov dword ptr ds : [esi+4], ecx
        public_62a7735 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62a7748
        mov dword ptr ds : [esi+4], edx
        jmp public_62a7757
        public_62a7748 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_62a7755
        mov dword ptr ds : [esi+8], edx
        jmp public_62a7757
        public_62a7755 : nop
        mov dword ptr ds : [esi], edx
        public_62a7757 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_62a7762 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x28], bl
        jne public_62a7808
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x28], bl
        jne public_62a7808
        public_62a7779 : nop
        mov byte ptr ds : [ecx+0x28], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_62a7650
        jmp public_62a78a7
        public_62a7791 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_62a779e
        mov dword ptr ds : [esi+8], edx
        jmp public_62a77a0
        public_62a779e : nop
        mov dword ptr ds : [esi], edx
        public_62a77a0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_62a77ac : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x28]
        mov byte ptr ds : [ecx+0x28], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x28], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x28], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_62a77d6
        mov dword ptr ds : [esi+4], ecx
        public_62a77d6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62a77ee
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_62a78a4
        public_62a77ee : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_62a77fe
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_62a78a4
        public_62a77fe : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_62a78a4
        public_62a7808 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x28], bl
        jne public_62a7856
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x28], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x28], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_62a782b
        mov dword ptr ds : [esi+4], ecx
        public_62a782b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62a783e
        mov dword ptr ds : [esi+4], edx
        jmp public_62a784c
        public_62a783e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_62a7849
        mov dword ptr ds : [esi], edx
        jmp public_62a784c
        public_62a7849 : nop
        mov dword ptr ds : [esi+8], edx
        public_62a784c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_62a7856 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x28]
        mov byte ptr ds : [ecx+0x28], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x28], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x28], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_62a787f
        mov dword ptr ds : [esi+4], ecx
        public_62a787f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_62a7892
        mov dword ptr ds : [esi+4], edx
        jmp public_62a78a1
        public_62a7892 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_62a789f
        mov dword ptr ds : [esi+8], edx
        jmp public_62a78a1
        public_62a789f : nop
        mov dword ptr ds : [esi], edx
        public_62a78a1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_62a78a4 : nop
        mov dword ptr ds : [ecx+4], edx
        public_62a78a7 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x28], bl
        public_62a78ae : nop
        lea ecx, ds:[esi+0xC]
        call public_62a3d00
        push esi
        call public_6391d5a
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
        UNREACHABLE_TRAP(0x62a7500)
    }
}

#undef public_62a7524
#undef public_62a7542
#undef public_62a754d
#undef public_62a7556
#undef public_62a7561
#undef public_62a757d
#undef public_62a7594
#undef public_62a75a1
#undef public_62a75ac
#undef public_62a75af
#undef public_62a75c7
#undef public_62a75d2
#undef public_62a75d5
#undef public_62a75ea
#undef public_62a75f5
#undef public_62a7600
#undef public_62a7603
#undef public_62a7617
#undef public_62a7623
#undef public_62a762f
#undef public_62a7632
#undef public_62a7650
#undef public_62a768f
#undef public_62a76a2
#undef public_62a76ad
#undef public_62a76b0
#undef public_62a76bb
#undef public_62a76ce
#undef public_62a76f5
#undef public_62a770f
#undef public_62a7735
#undef public_62a7748
#undef public_62a7755
#undef public_62a7757
#undef public_62a7762
#undef public_62a7779
#undef public_62a7791
#undef public_62a779e
#undef public_62a77a0
#undef public_62a77ac
#undef public_62a77d6
#undef public_62a77ee
#undef public_62a77fe
#undef public_62a7808
#undef public_62a782b
#undef public_62a783e
#undef public_62a7849
#undef public_62a784c
#undef public_62a7856
#undef public_62a787f
#undef public_62a7892
#undef public_62a789f
#undef public_62a78a1
#undef public_62a78a4
#undef public_62a78a7
#undef public_62a78ae
