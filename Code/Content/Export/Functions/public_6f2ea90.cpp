#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2ea90);
CLANG_FORWARD_PROC_SYMBOL(public_6f46640);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f2eab4 _public_6f2eab4
#define public_6f2ead2 _public_6f2ead2
#define public_6f2eadd _public_6f2eadd
#define public_6f2eae6 _public_6f2eae6
#define public_6f2eaf1 _public_6f2eaf1
#define public_6f2eb0d _public_6f2eb0d
#define public_6f2eb24 _public_6f2eb24
#define public_6f2eb31 _public_6f2eb31
#define public_6f2eb3c _public_6f2eb3c
#define public_6f2eb3f _public_6f2eb3f
#define public_6f2eb57 _public_6f2eb57
#define public_6f2eb62 _public_6f2eb62
#define public_6f2eb65 _public_6f2eb65
#define public_6f2eb7a _public_6f2eb7a
#define public_6f2eb85 _public_6f2eb85
#define public_6f2eb90 _public_6f2eb90
#define public_6f2eb93 _public_6f2eb93
#define public_6f2eba7 _public_6f2eba7
#define public_6f2ebb3 _public_6f2ebb3
#define public_6f2ebbf _public_6f2ebbf
#define public_6f2ebc2 _public_6f2ebc2
#define public_6f2ebe0 _public_6f2ebe0
#define public_6f2ec1f _public_6f2ec1f
#define public_6f2ec32 _public_6f2ec32
#define public_6f2ec3d _public_6f2ec3d
#define public_6f2ec40 _public_6f2ec40
#define public_6f2ec4b _public_6f2ec4b
#define public_6f2ec5e _public_6f2ec5e
#define public_6f2ec85 _public_6f2ec85
#define public_6f2ec9f _public_6f2ec9f
#define public_6f2ecc5 _public_6f2ecc5
#define public_6f2ecd8 _public_6f2ecd8
#define public_6f2ece5 _public_6f2ece5
#define public_6f2ece7 _public_6f2ece7
#define public_6f2ecf2 _public_6f2ecf2
#define public_6f2ed09 _public_6f2ed09
#define public_6f2ed21 _public_6f2ed21
#define public_6f2ed2e _public_6f2ed2e
#define public_6f2ed30 _public_6f2ed30
#define public_6f2ed3c _public_6f2ed3c
#define public_6f2ed66 _public_6f2ed66
#define public_6f2ed7e _public_6f2ed7e
#define public_6f2ed8e _public_6f2ed8e
#define public_6f2ed98 _public_6f2ed98
#define public_6f2edbb _public_6f2edbb
#define public_6f2edce _public_6f2edce
#define public_6f2edd9 _public_6f2edd9
#define public_6f2eddc _public_6f2eddc
#define public_6f2ede6 _public_6f2ede6
#define public_6f2ee0f _public_6f2ee0f
#define public_6f2ee22 _public_6f2ee22
#define public_6f2ee2f _public_6f2ee2f
#define public_6f2ee31 _public_6f2ee31
#define public_6f2ee34 _public_6f2ee34
#define public_6f2ee37 _public_6f2ee37
#define public_6f2ee3a _public_6f2ee3a

PROC_DECLARE(0x6f2ea90, internal_6f2ea90, public_6f2ea90);
extern "C" NAKED register_t __cdecl internal_6f2ea90()
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
        call public_6f46640
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6f2ead2
        mov eax, dword ptr ds : [esi+8]
        public_6f2eab4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6f2eb57
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f2eb65
        public_6f2ead2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6f2eadd
        mov eax, edx
        jmp public_6f2eab4
        public_6f2eadd : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        jne public_6f2eaf1
        public_6f2eae6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        je public_6f2eae6
        public_6f2eaf1 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f2eab4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f2eb0d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6f2eb24
        public_6f2eb0d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6f2eb24 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6f2eb31
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f2eb3f
        public_6f2eb31 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6f2eb3c
        mov dword ptr ds : [edx], ecx
        jmp public_6f2eb3f
        public_6f2eb3c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f2eb3f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x24]
        mov dl, byte ptr ds : [ecx+0x24]
        mov byte ptr ds : [ecx+0x24], bl
        mov byte ptr ds : [esi+0x24], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6f2ebc2
        public_6f2eb57 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6f2eb62
        mov dword ptr ds : [ecx], eax
        jmp public_6f2eb65
        public_6f2eb62 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6f2eb65 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6f2eb93
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f2eb7a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f2eb90
        public_6f2eb7a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        mov edx, eax
        jne public_6f2eb90
        public_6f2eb85 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        je public_6f2eb85
        public_6f2eb90 : nop
        mov dword ptr ss : [ebp], edx
        public_6f2eb93 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6f2ebc2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f2eba7
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f2ebbf
        public_6f2eba7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        mov edx, eax
        jne public_6f2ebbf
        public_6f2ebb3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        je public_6f2ebb3
        public_6f2ebbf : nop
        mov dword ptr ss : [ebp+8], edx
        public_6f2ebc2 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x24]
        mov bl, 1
        cmp dl, bl
        jne public_6f2ee3a
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_6f2ee37
        nop 
        public_6f2ebe0 : nop
        cmp byte ptr ds : [eax+0x24], bl
        jne public_6f2ee37
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f2ec9f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6f2ec4b
        mov byte ptr ds : [ecx+0x24], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f2ec1f
        mov dword ptr ds : [esi+4], ecx
        public_6f2ec1f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f2ec32
        mov dword ptr ds : [esi+4], edx
        jmp public_6f2ec40
        public_6f2ec32 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f2ec3d
        mov dword ptr ds : [esi], edx
        jmp public_6f2ec40
        public_6f2ec3d : nop
        mov dword ptr ds : [esi+8], edx
        public_6f2ec40 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_6f2ec4b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6f2ec5e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x24], bl
        je public_6f2ed09
        public_6f2ec5e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6f2ed3c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x24], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x24], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f2ec85
        mov dword ptr ds : [esi+4], ecx
        public_6f2ec85 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f2ed21
        mov dword ptr ds : [esi+4], edx
        jmp public_6f2ed30
        public_6f2ec9f : nop
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6f2ecf2
        mov byte ptr ds : [ecx+0x24], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f2ecc5
        mov dword ptr ds : [esi+4], ecx
        public_6f2ecc5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f2ecd8
        mov dword ptr ds : [esi+4], edx
        jmp public_6f2ece7
        public_6f2ecd8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f2ece5
        mov dword ptr ds : [esi+8], edx
        jmp public_6f2ece7
        public_6f2ece5 : nop
        mov dword ptr ds : [esi], edx
        public_6f2ece7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6f2ecf2 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6f2ed98
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6f2ed98
        public_6f2ed09 : nop
        mov byte ptr ds : [ecx+0x24], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f2ebe0
        jmp public_6f2ee37
        public_6f2ed21 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f2ed2e
        mov dword ptr ds : [esi+8], edx
        jmp public_6f2ed30
        public_6f2ed2e : nop
        mov dword ptr ds : [esi], edx
        public_6f2ed30 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f2ed3c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x24]
        mov byte ptr ds : [ecx+0x24], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x24], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x24], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f2ed66
        mov dword ptr ds : [esi+4], ecx
        public_6f2ed66 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f2ed7e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f2ee34
        public_6f2ed7e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f2ed8e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f2ee34
        public_6f2ed8e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f2ee34
        public_6f2ed98 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6f2ede6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x24], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x24], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f2edbb
        mov dword ptr ds : [esi+4], ecx
        public_6f2edbb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f2edce
        mov dword ptr ds : [esi+4], edx
        jmp public_6f2eddc
        public_6f2edce : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f2edd9
        mov dword ptr ds : [esi], edx
        jmp public_6f2eddc
        public_6f2edd9 : nop
        mov dword ptr ds : [esi+8], edx
        public_6f2eddc : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6f2ede6 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x24]
        mov byte ptr ds : [ecx+0x24], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x24], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x24], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f2ee0f
        mov dword ptr ds : [esi+4], ecx
        public_6f2ee0f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f2ee22
        mov dword ptr ds : [esi+4], edx
        jmp public_6f2ee31
        public_6f2ee22 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f2ee2f
        mov dword ptr ds : [esi+8], edx
        jmp public_6f2ee31
        public_6f2ee2f : nop
        mov dword ptr ds : [esi], edx
        public_6f2ee31 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f2ee34 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f2ee37 : nop
        mov byte ptr ds : [eax+0x24], bl
        public_6f2ee3a : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f2ea90)
    }
}

#undef public_6f2eab4
#undef public_6f2ead2
#undef public_6f2eadd
#undef public_6f2eae6
#undef public_6f2eaf1
#undef public_6f2eb0d
#undef public_6f2eb24
#undef public_6f2eb31
#undef public_6f2eb3c
#undef public_6f2eb3f
#undef public_6f2eb57
#undef public_6f2eb62
#undef public_6f2eb65
#undef public_6f2eb7a
#undef public_6f2eb85
#undef public_6f2eb90
#undef public_6f2eb93
#undef public_6f2eba7
#undef public_6f2ebb3
#undef public_6f2ebbf
#undef public_6f2ebc2
#undef public_6f2ebe0
#undef public_6f2ec1f
#undef public_6f2ec32
#undef public_6f2ec3d
#undef public_6f2ec40
#undef public_6f2ec4b
#undef public_6f2ec5e
#undef public_6f2ec85
#undef public_6f2ec9f
#undef public_6f2ecc5
#undef public_6f2ecd8
#undef public_6f2ece5
#undef public_6f2ece7
#undef public_6f2ecf2
#undef public_6f2ed09
#undef public_6f2ed21
#undef public_6f2ed2e
#undef public_6f2ed30
#undef public_6f2ed3c
#undef public_6f2ed66
#undef public_6f2ed7e
#undef public_6f2ed8e
#undef public_6f2ed98
#undef public_6f2edbb
#undef public_6f2edce
#undef public_6f2edd9
#undef public_6f2eddc
#undef public_6f2ede6
#undef public_6f2ee0f
#undef public_6f2ee22
#undef public_6f2ee2f
#undef public_6f2ee31
#undef public_6f2ee34
#undef public_6f2ee37
#undef public_6f2ee3a
