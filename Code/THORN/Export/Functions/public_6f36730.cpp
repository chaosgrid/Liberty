#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f36730);
CLANG_FORWARD_PROC_SYMBOL(public_6f37330);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f36754 _public_6f36754
#define public_6f36772 _public_6f36772
#define public_6f3677d _public_6f3677d
#define public_6f36786 _public_6f36786
#define public_6f36791 _public_6f36791
#define public_6f367ad _public_6f367ad
#define public_6f367c4 _public_6f367c4
#define public_6f367d1 _public_6f367d1
#define public_6f367dc _public_6f367dc
#define public_6f367df _public_6f367df
#define public_6f367f7 _public_6f367f7
#define public_6f36802 _public_6f36802
#define public_6f36805 _public_6f36805
#define public_6f3681a _public_6f3681a
#define public_6f36825 _public_6f36825
#define public_6f36830 _public_6f36830
#define public_6f36833 _public_6f36833
#define public_6f36847 _public_6f36847
#define public_6f36853 _public_6f36853
#define public_6f3685f _public_6f3685f
#define public_6f36862 _public_6f36862
#define public_6f36880 _public_6f36880
#define public_6f368bf _public_6f368bf
#define public_6f368d2 _public_6f368d2
#define public_6f368dd _public_6f368dd
#define public_6f368e0 _public_6f368e0
#define public_6f368eb _public_6f368eb
#define public_6f368fe _public_6f368fe
#define public_6f36925 _public_6f36925
#define public_6f3693f _public_6f3693f
#define public_6f36965 _public_6f36965
#define public_6f36978 _public_6f36978
#define public_6f36985 _public_6f36985
#define public_6f36987 _public_6f36987
#define public_6f36992 _public_6f36992
#define public_6f369a9 _public_6f369a9
#define public_6f369c1 _public_6f369c1
#define public_6f369ce _public_6f369ce
#define public_6f369d0 _public_6f369d0
#define public_6f369dc _public_6f369dc
#define public_6f36a06 _public_6f36a06
#define public_6f36a1e _public_6f36a1e
#define public_6f36a2e _public_6f36a2e
#define public_6f36a38 _public_6f36a38
#define public_6f36a5b _public_6f36a5b
#define public_6f36a6e _public_6f36a6e
#define public_6f36a79 _public_6f36a79
#define public_6f36a7c _public_6f36a7c
#define public_6f36a86 _public_6f36a86
#define public_6f36aaf _public_6f36aaf
#define public_6f36ac2 _public_6f36ac2
#define public_6f36acf _public_6f36acf
#define public_6f36ad1 _public_6f36ad1
#define public_6f36ad4 _public_6f36ad4
#define public_6f36ad7 _public_6f36ad7
#define public_6f36ada _public_6f36ada

PROC_DECLARE(0x6f36730, internal_6f36730, public_6f36730);
extern "C" NAKED register_t __cdecl internal_6f36730()
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
        call public_6f37330
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6f36772
        mov eax, dword ptr ds : [esi+8]
        public_6f36754 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6f367f7
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f36805
        public_6f36772 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6f3677d
        mov eax, edx
        jmp public_6f36754
        public_6f3677d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_6f36791
        public_6f36786 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_6f36786
        public_6f36791 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f36754
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f367ad
        mov dword ptr ds : [eax+4], ecx
        jmp public_6f367c4
        public_6f367ad : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6f367c4 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6f367d1
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f367df
        public_6f367d1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6f367dc
        mov dword ptr ds : [edx], ecx
        jmp public_6f367df
        public_6f367dc : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f367df : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x20]
        mov dl, byte ptr ds : [ecx+0x20]
        mov byte ptr ds : [ecx+0x20], bl
        mov byte ptr ds : [esi+0x20], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6f36862
        public_6f367f7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6f36802
        mov dword ptr ds : [ecx], eax
        jmp public_6f36805
        public_6f36802 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6f36805 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6f36833
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f3681a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f36830
        public_6f3681a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        mov edx, eax
        jne public_6f36830
        public_6f36825 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_6f36825
        public_6f36830 : nop
        mov dword ptr ss : [ebp], edx
        public_6f36833 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6f36862
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f36847
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f3685f
        public_6f36847 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        mov edx, eax
        jne public_6f3685f
        public_6f36853 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_6f36853
        public_6f3685f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6f36862 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x20]
        mov bl, 1
        cmp dl, bl
        jne public_6f36ada
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_6f36ad7
        nop 
        public_6f36880 : nop
        cmp byte ptr ds : [eax+0x20], bl
        jne public_6f36ad7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f3693f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6f368eb
        mov byte ptr ds : [ecx+0x20], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f368bf
        mov dword ptr ds : [esi+4], ecx
        public_6f368bf : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f368d2
        mov dword ptr ds : [esi+4], edx
        jmp public_6f368e0
        public_6f368d2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f368dd
        mov dword ptr ds : [esi], edx
        jmp public_6f368e0
        public_6f368dd : nop
        mov dword ptr ds : [esi+8], edx
        public_6f368e0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_6f368eb : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6f368fe
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        je public_6f369a9
        public_6f368fe : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6f369dc
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x20], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x20], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f36925
        mov dword ptr ds : [esi+4], ecx
        public_6f36925 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f369c1
        mov dword ptr ds : [esi+4], edx
        jmp public_6f369d0
        public_6f3693f : nop
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6f36992
        mov byte ptr ds : [ecx+0x20], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f36965
        mov dword ptr ds : [esi+4], ecx
        public_6f36965 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f36978
        mov dword ptr ds : [esi+4], edx
        jmp public_6f36987
        public_6f36978 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f36985
        mov dword ptr ds : [esi+8], edx
        jmp public_6f36987
        public_6f36985 : nop
        mov dword ptr ds : [esi], edx
        public_6f36987 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6f36992 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6f36a38
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6f36a38
        public_6f369a9 : nop
        mov byte ptr ds : [ecx+0x20], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f36880
        jmp public_6f36ad7
        public_6f369c1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f369ce
        mov dword ptr ds : [esi+8], edx
        jmp public_6f369d0
        public_6f369ce : nop
        mov dword ptr ds : [esi], edx
        public_6f369d0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f369dc : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x20]
        mov byte ptr ds : [ecx+0x20], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x20], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x20], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f36a06
        mov dword ptr ds : [esi+4], ecx
        public_6f36a06 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f36a1e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f36ad4
        public_6f36a1e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f36a2e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f36ad4
        public_6f36a2e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f36ad4
        public_6f36a38 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6f36a86
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x20], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x20], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f36a5b
        mov dword ptr ds : [esi+4], ecx
        public_6f36a5b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f36a6e
        mov dword ptr ds : [esi+4], edx
        jmp public_6f36a7c
        public_6f36a6e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f36a79
        mov dword ptr ds : [esi], edx
        jmp public_6f36a7c
        public_6f36a79 : nop
        mov dword ptr ds : [esi+8], edx
        public_6f36a7c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6f36a86 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x20]
        mov byte ptr ds : [ecx+0x20], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x20], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x20], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f36aaf
        mov dword ptr ds : [esi+4], ecx
        public_6f36aaf : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f36ac2
        mov dword ptr ds : [esi+4], edx
        jmp public_6f36ad1
        public_6f36ac2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f36acf
        mov dword ptr ds : [esi+8], edx
        jmp public_6f36ad1
        public_6f36acf : nop
        mov dword ptr ds : [esi], edx
        public_6f36ad1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f36ad4 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f36ad7 : nop
        mov byte ptr ds : [eax+0x20], bl
        public_6f36ada : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6f57e26
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
        UNREACHABLE_TRAP(0x6f36730)
    }
}

#undef public_6f36754
#undef public_6f36772
#undef public_6f3677d
#undef public_6f36786
#undef public_6f36791
#undef public_6f367ad
#undef public_6f367c4
#undef public_6f367d1
#undef public_6f367dc
#undef public_6f367df
#undef public_6f367f7
#undef public_6f36802
#undef public_6f36805
#undef public_6f3681a
#undef public_6f36825
#undef public_6f36830
#undef public_6f36833
#undef public_6f36847
#undef public_6f36853
#undef public_6f3685f
#undef public_6f36862
#undef public_6f36880
#undef public_6f368bf
#undef public_6f368d2
#undef public_6f368dd
#undef public_6f368e0
#undef public_6f368eb
#undef public_6f368fe
#undef public_6f36925
#undef public_6f3693f
#undef public_6f36965
#undef public_6f36978
#undef public_6f36985
#undef public_6f36987
#undef public_6f36992
#undef public_6f369a9
#undef public_6f369c1
#undef public_6f369ce
#undef public_6f369d0
#undef public_6f369dc
#undef public_6f36a06
#undef public_6f36a1e
#undef public_6f36a2e
#undef public_6f36a38
#undef public_6f36a5b
#undef public_6f36a6e
#undef public_6f36a79
#undef public_6f36a7c
#undef public_6f36a86
#undef public_6f36aaf
#undef public_6f36ac2
#undef public_6f36acf
#undef public_6f36ad1
#undef public_6f36ad4
#undef public_6f36ad7
#undef public_6f36ada
