#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee76d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8080);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8ddc);

#define public_6ee76f4 _public_6ee76f4
#define public_6ee7712 _public_6ee7712
#define public_6ee771d _public_6ee771d
#define public_6ee7726 _public_6ee7726
#define public_6ee7731 _public_6ee7731
#define public_6ee774d _public_6ee774d
#define public_6ee7764 _public_6ee7764
#define public_6ee7771 _public_6ee7771
#define public_6ee777c _public_6ee777c
#define public_6ee777f _public_6ee777f
#define public_6ee7797 _public_6ee7797
#define public_6ee77a2 _public_6ee77a2
#define public_6ee77a5 _public_6ee77a5
#define public_6ee77ba _public_6ee77ba
#define public_6ee77c5 _public_6ee77c5
#define public_6ee77d0 _public_6ee77d0
#define public_6ee77d3 _public_6ee77d3
#define public_6ee77e7 _public_6ee77e7
#define public_6ee77f3 _public_6ee77f3
#define public_6ee77ff _public_6ee77ff
#define public_6ee7802 _public_6ee7802
#define public_6ee7820 _public_6ee7820
#define public_6ee785f _public_6ee785f
#define public_6ee7872 _public_6ee7872
#define public_6ee787d _public_6ee787d
#define public_6ee7880 _public_6ee7880
#define public_6ee788b _public_6ee788b
#define public_6ee789e _public_6ee789e
#define public_6ee78c5 _public_6ee78c5
#define public_6ee78df _public_6ee78df
#define public_6ee7905 _public_6ee7905
#define public_6ee7918 _public_6ee7918
#define public_6ee7925 _public_6ee7925
#define public_6ee7927 _public_6ee7927
#define public_6ee7932 _public_6ee7932
#define public_6ee7949 _public_6ee7949
#define public_6ee7961 _public_6ee7961
#define public_6ee796e _public_6ee796e
#define public_6ee7970 _public_6ee7970
#define public_6ee797c _public_6ee797c
#define public_6ee79a6 _public_6ee79a6
#define public_6ee79be _public_6ee79be
#define public_6ee79ce _public_6ee79ce
#define public_6ee79d8 _public_6ee79d8
#define public_6ee79fb _public_6ee79fb
#define public_6ee7a0e _public_6ee7a0e
#define public_6ee7a19 _public_6ee7a19
#define public_6ee7a1c _public_6ee7a1c
#define public_6ee7a26 _public_6ee7a26
#define public_6ee7a4f _public_6ee7a4f
#define public_6ee7a62 _public_6ee7a62
#define public_6ee7a6f _public_6ee7a6f
#define public_6ee7a71 _public_6ee7a71
#define public_6ee7a74 _public_6ee7a74
#define public_6ee7a7b _public_6ee7a7b
#define public_6ee7a7e _public_6ee7a7e
#define public_6ee7aa6 _public_6ee7aa6
#define public_6ee7aaf _public_6ee7aaf

PROC_DECLARE(0x6ee76d0, internal_6ee76d0, public_6ee76d0);
extern "C" NAKED register_t __cdecl internal_6ee76d0()
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
        call public_6ee8080
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6ee7712
        mov eax, dword ptr ds : [esi+8]
        public_6ee76f4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6ee7797
        mov dword ptr ds : [ecx+4], eax
        jmp public_6ee77a5
        public_6ee7712 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6ee771d
        mov eax, edx
        jmp public_6ee76f4
        public_6ee771d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6ee7731
        public_6ee7726 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6ee7726
        public_6ee7731 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6ee76f4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ee774d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6ee7764
        public_6ee774d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6ee7764 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6ee7771
        mov dword ptr ds : [edx+4], ecx
        jmp public_6ee777f
        public_6ee7771 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6ee777c
        mov dword ptr ds : [edx], ecx
        jmp public_6ee777f
        public_6ee777c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6ee777f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x14]
        mov dl, byte ptr ds : [ecx+0x14]
        mov byte ptr ds : [ecx+0x14], bl
        mov byte ptr ds : [esi+0x14], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6ee7802
        public_6ee7797 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6ee77a2
        mov dword ptr ds : [ecx], eax
        jmp public_6ee77a5
        public_6ee77a2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6ee77a5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6ee77d3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6ee77ba
        mov edx, dword ptr ds : [esi+4]
        jmp public_6ee77d0
        public_6ee77ba : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        mov edx, eax
        jne public_6ee77d0
        public_6ee77c5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_6ee77c5
        public_6ee77d0 : nop
        mov dword ptr ss : [ebp], edx
        public_6ee77d3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6ee7802
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6ee77e7
        mov edx, dword ptr ds : [esi+4]
        jmp public_6ee77ff
        public_6ee77e7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        mov edx, eax
        jne public_6ee77ff
        public_6ee77f3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_6ee77f3
        public_6ee77ff : nop
        mov dword ptr ss : [ebp+8], edx
        public_6ee7802 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ss : [ebp+0x14]
        mov bl, 1
        cmp cl, bl
        jne public_6ee7a7e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6ee7a7b
        nop 
        public_6ee7820 : nop
        cmp byte ptr ds : [eax+0x14], bl
        jne public_6ee7a7b
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6ee78df
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6ee788b
        mov byte ptr ds : [ecx+0x14], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ee785f
        mov dword ptr ds : [esi+4], ecx
        public_6ee785f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ee7872
        mov dword ptr ds : [esi+4], edx
        jmp public_6ee7880
        public_6ee7872 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6ee787d
        mov dword ptr ds : [esi], edx
        jmp public_6ee7880
        public_6ee787d : nop
        mov dword ptr ds : [esi+8], edx
        public_6ee7880 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6ee788b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6ee789e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        je public_6ee7949
        public_6ee789e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6ee797c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ee78c5
        mov dword ptr ds : [esi+4], ecx
        public_6ee78c5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ee7961
        mov dword ptr ds : [esi+4], edx
        jmp public_6ee7970
        public_6ee78df : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6ee7932
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ee7905
        mov dword ptr ds : [esi+4], ecx
        public_6ee7905 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ee7918
        mov dword ptr ds : [esi+4], edx
        jmp public_6ee7927
        public_6ee7918 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ee7925
        mov dword ptr ds : [esi+8], edx
        jmp public_6ee7927
        public_6ee7925 : nop
        mov dword ptr ds : [esi], edx
        public_6ee7927 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6ee7932 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6ee79d8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6ee79d8
        public_6ee7949 : nop
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6ee7820
        jmp public_6ee7a7b
        public_6ee7961 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ee796e
        mov dword ptr ds : [esi+8], edx
        jmp public_6ee7970
        public_6ee796e : nop
        mov dword ptr ds : [esi], edx
        public_6ee7970 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6ee797c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x14]
        mov byte ptr ds : [ecx+0x14], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x14], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ee79a6
        mov dword ptr ds : [esi+4], ecx
        public_6ee79a6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ee79be
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6ee7a74
        public_6ee79be : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6ee79ce
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6ee7a74
        public_6ee79ce : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6ee7a74
        public_6ee79d8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6ee7a26
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ee79fb
        mov dword ptr ds : [esi+4], ecx
        public_6ee79fb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ee7a0e
        mov dword ptr ds : [esi+4], edx
        jmp public_6ee7a1c
        public_6ee7a0e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6ee7a19
        mov dword ptr ds : [esi], edx
        jmp public_6ee7a1c
        public_6ee7a19 : nop
        mov dword ptr ds : [esi+8], edx
        public_6ee7a1c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6ee7a26 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x14]
        mov byte ptr ds : [ecx+0x14], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x14], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ee7a4f
        mov dword ptr ds : [esi+4], ecx
        public_6ee7a4f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ee7a62
        mov dword ptr ds : [esi+4], edx
        jmp public_6ee7a71
        public_6ee7a62 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ee7a6f
        mov dword ptr ds : [esi+8], edx
        jmp public_6ee7a71
        public_6ee7a6f : nop
        mov dword ptr ds : [esi], edx
        public_6ee7a71 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6ee7a74 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+4], edx
        public_6ee7a7b : nop
        mov byte ptr ds : [eax+0x14], bl
        public_6ee7a7e : nop
        cmp dword ptr ds : [public_6eeaf38], 0x7FFFFFFF
        jge public_6ee7aa6
        mov edx, dword ptr ds : [public_6eeaf2c]
        mov dword ptr ss : [ebp], edx
        mov eax, dword ptr ds : [public_6eeaf38]
        inc eax
        mov dword ptr ds : [public_6eeaf2c], ebp
        mov dword ptr ds : [public_6eeaf38], eax
        jmp public_6ee7aaf
        public_6ee7aa6 : nop
        push ebp
        call public_6ee8ddc
        add esp, 4
        public_6ee7aaf : nop
        mov eax, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ss : [esp+0x1C]
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
        UNREACHABLE_TRAP(0x6ee76d0)
    }
}

#undef public_6ee76f4
#undef public_6ee7712
#undef public_6ee771d
#undef public_6ee7726
#undef public_6ee7731
#undef public_6ee774d
#undef public_6ee7764
#undef public_6ee7771
#undef public_6ee777c
#undef public_6ee777f
#undef public_6ee7797
#undef public_6ee77a2
#undef public_6ee77a5
#undef public_6ee77ba
#undef public_6ee77c5
#undef public_6ee77d0
#undef public_6ee77d3
#undef public_6ee77e7
#undef public_6ee77f3
#undef public_6ee77ff
#undef public_6ee7802
#undef public_6ee7820
#undef public_6ee785f
#undef public_6ee7872
#undef public_6ee787d
#undef public_6ee7880
#undef public_6ee788b
#undef public_6ee789e
#undef public_6ee78c5
#undef public_6ee78df
#undef public_6ee7905
#undef public_6ee7918
#undef public_6ee7925
#undef public_6ee7927
#undef public_6ee7932
#undef public_6ee7949
#undef public_6ee7961
#undef public_6ee796e
#undef public_6ee7970
#undef public_6ee797c
#undef public_6ee79a6
#undef public_6ee79be
#undef public_6ee79ce
#undef public_6ee79d8
#undef public_6ee79fb
#undef public_6ee7a0e
#undef public_6ee7a19
#undef public_6ee7a1c
#undef public_6ee7a26
#undef public_6ee7a4f
#undef public_6ee7a62
#undef public_6ee7a6f
#undef public_6ee7a71
#undef public_6ee7a74
#undef public_6ee7a7b
#undef public_6ee7a7e
#undef public_6ee7aa6
#undef public_6ee7aaf
